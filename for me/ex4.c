#include <stdio.h>
int main(){
    float f=3.14f;
    printf("%f \n", f);
    int a=0x34;
    int *any=&a;
    printf("%d \n", *any);
    printf("%lu \n", sizeof(any));
}