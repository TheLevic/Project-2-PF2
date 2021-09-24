#include "mystrtok.h"

char *find_first_in_the_string_that_is_not_in_the_set(char *str, const char *set){
    while (*str != '\0'){ //Making sure we haven't hit the NULL character while looping in str
        const char *current = set;
        while (*current != '\0'){ //Making sure we haven't hit the NULL character while looping in set
            if (*str != *current){
                return str;
            }
            current++;
        }
        str++;
    }
return NULL;
}

char *find_first_in_the_string_that_is_in_the_set(char *str, const char *set){   
    while (*str != '\0'){
        const char *current = set;
        while (*current != '\0'){
            if ( *str == *current){
                return str;
            }
            else{
                current++;
            }
        }
        str++;
    }
    return NULL;
}

char *mystrtok(char *str, const char *delim){
}