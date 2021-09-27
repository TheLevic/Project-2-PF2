#include "mystrtok.h"

int main(){
    char n[] = "Hello Friend";
    char d[] = " ,o";
    cout << mystrtok(n,d);
    cout<< "\n" << strtok(n,d);
}