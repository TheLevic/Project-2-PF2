#include <iostream>
#include <cstring>
#include "mystrtok.h"
using namespace std;


char *mystrtok(char *str, const char *delim){
    static char* p; //To keep our spot
    char* curr_str; //The current string we are working with
    char* start; //Starting Position
    char* end; //End position
    if (*str != NULL){
        curr_str = str; //Setting the current string pointer = to the actual string since the first variable is != to null
    }
    else{
        curr_str = p; //If the first char is = to null than we willse the curr_str = to the tracker.
    }
    if (curr_str != NULL){
        start = find_first_in_the_string_that_is_not_in_the_set(curr_str,delim); //Getting start location
        if (start == NULL){
            p = NULL;
            return NULL;

        } 
        end = find_first_in_the_string_that_is_in_the_set(start,delim); //Getting the end location
        if (end != NULL){
                *end = '\0'; //Setting the location of the delimiter = to NULL
                p = end+1; //Setting the tracker = to one past the new NULL character
        }
        else{ //When end does = NULL
                *p = '\0';

        }
         return start;
    }
    else{
        return NULL; //Because our first character is NULL
    }
}