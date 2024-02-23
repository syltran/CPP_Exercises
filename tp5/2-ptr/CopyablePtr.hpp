#include "Object.hpp"


class CopyablePtr{
public:
CopyablePtr()
{}

// A2.
bool operator==(std::nullptr_t ptr) const{
    return _obj == ptr;
}

// A3.
CopyablePtr(int v)
    : _obj { new Object {v} }
{}

// A4.
Object& operator*() const{
    return *_obj;
}

// A5.
CopyablePtr& operator=(std::nullptr_t){
    delete _obj;
    _obj = nullptr;
    return *this;
}


// B1.
CopyablePtr(const CopyablePtr& other)
    : _obj { other == nullptr ? nullptr : new Object {*other._obj} }
{}

// B3.
// CopyablePtr(CopyablePtr&& other)
//     : _obj { std::move(other._obj) }
// {}

// B3.
CopyablePtr(CopyablePtr&& other)
{
    _obj = other._obj;
    other._obj = nullptr;
}


// C1. marche pas
// CopyablePtr& operator=(const CopyablePtr& other)
// {
//     if (this != &other)
//     {
//        _obj = other._obj;
//     }
//     return *this;
// }



// E
~CopyablePtr() { delete _obj; }

private:
Object* _obj = nullptr;
};