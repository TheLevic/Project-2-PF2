#include "mystrtok.h"

char *mystrtok(char *str, const char *delim){
    static char* p = str; //To keep our spot
    char* curr_str; //The current string we are working with
    char* start; //Starting Position
    char* end; //End position
    if (*str != '\0'){
        curr_str = str;
    }
    else{
        *curr_str = *p;
    }
    if (*curr_str != '\0'){
        start = find_first_in_the_string_that_is_not_in_the_set(curr_str,delim); //Getting start location
        if (start == NULL){
            *p = '\0';
            return NULL;
            end = find_first_in_the_string_that_is_in_the_set(curr_str,delim); //Getting the end location
        } 
        if (end != NULL){
                *end = '\0'; //Setting the location of the delimiter = to NULL
                p = end++; //Setting the tracker = to one past the new NULL character
        }
        else{ //When end does = NULL
                *p = '\0';
                return start;
        }
    }   
    else{
        return NULL; //Because our first character is NULL
    }
}

    
    
