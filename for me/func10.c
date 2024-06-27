#include <stdio.h>
void f1();
void f(){
    printf("Hello \n");
    f1();
}
void f1(){
    printf("Hello \n");
}
int main(){
    f();
}