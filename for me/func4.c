#include <stdio.h>
int foo(double d, double d2){
    if(d<d2) return 0;
    return 3;
}
int main(){
    int x=0;
    x=foo(3.14, 5.15);
    printf("x = %d \n", x);
}