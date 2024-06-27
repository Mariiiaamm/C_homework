#include <stdio.h>
void f(int x){
    if(x==0) return;
    printf("Hello \n");
    f(x-1); //recursive function
}
int main(){
    f(3);
}
// kam sa khaskacvi ayspes
// void f(int x){
//     if(x==0) return;
//     printf("Hello \n");
//     f1(x-1);
// }
// void f1(int x){
//     if(x==0) return;
//     printf("Hello \n");
//     f2(x-1);
// } ...