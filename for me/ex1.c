#include <stdio.h>
int main(){
    int x; //4 byte
    double y; //8 byte
    char z; //1 byte
    printf("%p \n", &x);
    printf("%p \n", &y);
    printf("%p \n", &z);
}