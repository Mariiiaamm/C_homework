#include <stdio.h>
//function prototype
int foo(double, double);
int main(){
    int x=0;
    double ddd=3.14;
    x=foo(ddd, 5.15);
    printf("x = %d \n", x);
}
int foo(double d, double d2){
    if(d<d2) return 0;
    return 3;
}