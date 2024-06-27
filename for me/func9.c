#include <stdio.h>
#include <stdbool.h>
bool f1(){
    printf("f1()\n");
    return false;
}
bool f2(){
    printf("f2()\n");
    return true;
}
int main(){
    if(f2() || f1() || f1() || f2()) printf("yes\n");
    else printf("no\n");
}