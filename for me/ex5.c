#include <stdio.h>
int main(){
    int a = 4;
    int b = 5;
    int* pa = &a;
    int* pb = &b;
    printf("%d \n", *pa + *pb);
}