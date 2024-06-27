#include <stdio.h>
void f(void){
    printf("Hello, world!\n");
}
void f2(void){
    int x=20;
    printf("%d\n", x);
}
int main(){
    printf("first\n");
    f2();
    printf("last\n");
}