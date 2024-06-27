#include <stdio.h>
int average(int a, int b, int c){
    return (a+b+c)/3;
}
int main(){
    int x1=4, x2=5, x3=6;
    int avg=average(x1, x2, x3);
    printf("%d\n", avg);
    x1=44; x2=55; x3=66;
    avg=average(x1, x2, x3);
    printf("%d\n", avg);
}