#include <stdio.h>

int main() {
    int i,n=-1;
    char x,v,a[50];
    printf("T:\n");
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    a[n+1]='\0';
    for(i=0;i<=n/2;i++)
    {
        v=a[i];
        a[i]=a[n-i];
        a[n-i]=v;
    }
    printf("%s\n",a);
    return 0;
}