#include "mystrtok.h"
    

int main(){
    char delim[] = " y";
    char test_string1[] = "Hello Friend ";
    char test_string2[] = "Goodbye";
    char test_string3[] = "Hey everyone!";
    char test_string4[] = "\0Hey again!";
    
    cout << "This is the result for mystrtok for test string1: " << mystrtok(test_string1, delim) << endl;
    cout << "This is the result for mystrtok for test string2: " << mystrtok(test_string2, delim) << endl;
    cout << "This is the result for mystrtok for test string3: " << mystrtok(test_string3, delim) << endl;
    cout << "This is the result for mystrtok for test string4: ";
    if (mystrtok(test_string4,delim) == NULL){
        cout << "NULL" << endl;
    }
    cout << "-------------------------------------------------------------" << endl;
    cout << "This is the result for strtok for test string1: " << strtok(test_string1, delim) << endl;
    cout << "This is the result for strtok for test string2: " << strtok(test_string2, delim) << endl;
    cout << "This is the result for strtok for test string3: " << strtok(test_string3, delim) << endl;
    cout << "This is the result for strtok for test string4: ";
    if (strtok(test_string4,delim) == NULL){
        cout << "NULL" << endl;
    }
}