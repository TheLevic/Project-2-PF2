#include "helper.h"

bool is_the_char_in_the_set(char c, const char *set){
    //Default value should be false. We don't know if our character is in the c string.
    bool tempbool = false;

    //While loop to make sure that we haven't hit the NULL character
    while (*set != '\0'){
        //If the first value in the set is equal to the character return true
        if (*set == c){ 
            tempbool = true;
            break;
        }
        else{
            set++;
        }
    }
    //Return the value
    return tempbool;
}

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


