#include <iostream>
#include <cstring>
#include "mystrtok.h"
using namespace std;

/*
*Levi Crider
*9/27/2021
*/

/*
Synopsis: Goal of this project is to implement the strtok function using the two variables made in project1.
*/

#include <iostream>
#include <cstring>
#include "mystrtok.h"
using namespace std;


char *mystrtok(char *str, const char *delim){
    static char *p; //To keep our spot
    char* curr_str; //The current string we are working with
    char* start; //Starting Position
    char* end; //End position
    if (str != NULL){
        curr_str = str;
    }
    else{
        curr_str = p;
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
                p = NULL;

        }
         return start;
    }
    else{
        return NULL; //Because our first character is NULL
    }
}
