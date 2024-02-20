#include <string>
#include <vector>

// Return the number of occurrences of 'a' found in string 's'.
// int count_a_occurrences(std::string s);
int count_a_occurrences(const std::string& s);

// Update function of a rendering program.
// - dt (delta time) is read by the function to know the time elapsed since the last frame.
// - errors is a string filled by the function to indicate what errors have occured.
// void update_loop(const float& dt, std::string& errors_out);
void update_loop(float dt, std::string& errors_out);

// Return whether all numbers in 'values' are positive.
// If there are negative values in it, fill the array 'negative_indices_out' with the indices
// of these values and set its size in 'negative_count_out'.
// ex: auto res = are_all_positive({ 1, -2, 3, -4 }, negative_indices, negative_count);
//    -> res is false, since not all values are positive
//    -> negative_indices contains { 1, 3 } because values[1] = -2 and values[3] = -4
//    -> negative_count is 2
// bool are_all_positives(std::vector<int> values, int negative_indices_out[], size_t& negative_count_out);

// Notes : 
// pas besoin du dernier paramètre

bool are_all_positives(const std::vector<int>& values, std::vector<int>& negative_indices_out);

// Concatenate 'str1' and 'str2' and return the result.
// The input parameters are not modified by the function.
// std::string concatenate(char* str1, char* str2);
std::string concatenate(const std::string& str1, const std::string& str2);

// Notes :
// on ne renvoie pas une référence car on veut une valeur (qu'on va affecter à une variable) 
// et pas la référence à une variable locale (qui va être desinstanciée à la sortie de la fonction) --> dangling-reference