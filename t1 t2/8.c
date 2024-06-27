#include <stdio.h>
#include <stdbool.h>

int main() {
    int i,j,k=0,m=-1,n=-1;
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
    for(i=0;i<n;i++)
    {
        j=0;
        while(j<=m && b[j]!=a[i]) j++;
        if(j<=m) k++;
    }
    printf("k=%d",k);
    return 0;
}