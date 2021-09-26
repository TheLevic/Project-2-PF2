#include "mystrtok.h"

char *mystrtok(char *str, const char *delim){
    static char* p; //To keep our spot
    char* curr_str;
    char * start;
    char* delim;
    if (*str != NULL){
        curr_str = str;
    }
    else{
        curr_str = p;
    }

}

    
    
