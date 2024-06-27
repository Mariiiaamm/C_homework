#include <stdio.h>
int main(){
    int x;
    int *a=&x;
    x=14;
    printf("%d \n", x);
    printf("%d \n", *a);
    x=23;
    printf("%d \n", *a);
    *a=44;
    printf("%d \n", x);
    printf("%d \n", *a);
}