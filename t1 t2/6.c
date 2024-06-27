#include <stdio.h>
#include <stdbool.h>

int main() {
    int i=0,f,s=0,k=0,j,n=-1;
    char x,a[50];
    bool b=false;
    printf("T:\n");
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    while(i<=n/2 && a[i]==a[n-i]) i++;
    if(i>n/2) b=true;
    if(b==true) printf("The string is symmetric.\n");
    else printf("The string is not symmetric.\n");
    return 0;
}