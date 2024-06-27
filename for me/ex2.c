#include <stdio.h>
int main(){
    int x;
    int *a;
    a = &x;
    printf("&x == %p \n", &x);
    printf("a  == %p \n", a);
}