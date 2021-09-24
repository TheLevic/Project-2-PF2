using namespace std;
#include <iostream>
#include <cstring>

bool is_the_char_in_the_set(char c, const char *set);

char *find_first_in_the_string_that_is_not_in_the_set(char *str, const char *set);

char *find_first_in_the_string_that_is_in_the_set(char *str, const char *set);