# TP 5

## Exercice 1 - l-value ou r-value ? (30 min)

### 1. Identifiez si les expressions ci-dessous sont des l-values ou des r-values et justifiez.
R = r-values
L = l-values

#### a. i est un int

4 -> R
4 + i -> R
i -> L
i = 4 -> L (car on peut par exemple faire (i = 4) = 3;)
i == 4 -> R

#### b. vec est un std::vector<char>

vec[5] -> L
vec -> L
vec.pop_back() -> rien (car ça renvoie void)
std::vector { 'a', 'b', 'c' } -> R 
vec.push_back('d') -> rien (car ça renvoie void)
std::move(vec) -> R

#### c. ptr est un pointeur de int

ptr + 3 -> R
*(ptr + 3) -> L
*ptr + 3 -> R

#### d. str est une std::string

std::string { "aaaa" } -> R
str -> L
str + "aaaa" -> R
str += "aaaa" -> L (de la même manière que i = 4 est une l-value) (on peut par exemple faire (str += "aaaa") += "b";)
"aaaa" -> L (stocker dans la mémoire static, elle a une adresse donc c'est une l-value)


### 2. Supposons que vous ayiez l'instruction : Class inst { expr }.
#### Quelles sont les deux conditions pour que le constructeur de copie soit appelé ?
-expr doit être du même type que inst c-à-d Class
-


#### Même question pour le constructeur de déplacement ?
-expr doit être du même type que inst c-à-d Class
-std::move()

































