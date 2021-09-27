#include "mystrtok.h"

int main(){
    char delim[] = " ";
    char n[] = "Hello Friend";
    char *p = n;
    cout << mystrtok(p,delim);
}