#include <stdio.h>
#include <stdbool.h>

int main() {
    int i,j,n1=0,n2=0,m=-1,n=-1;
    char x,y,a[50],b[50];
    printf("T1:\n");
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    printf("T2:\n");
    while((y=getchar())!='\n')
    {
        m++;
        b[m]=y;
    }
    for(i=0;i<=n;i++)
    {
        j=0;
        while(j<=m && b[j]!=a[i]) j++;
        if(j>m) n1++;
    }
    for(j=0;j<=m;j++)
    {
        i=0;
        while(i<=n && b[j]!=a[i]) i++;
        if(i>n) n2++;
    }
    printf("n1=%d n2=%d",n1,n2);
    return 0;
}