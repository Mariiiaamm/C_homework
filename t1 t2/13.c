#include <stdio.h>

int main()
{
    int i,j=0,n=-1;
    char x,a[50],b[50];
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    a[n+1]='\0';
    b[0]=a[0];
    j++;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            b[j]=a[i];
            j++;
        }
    }
    b[j]=a[n];
    j++;
    b[j]='\0';
    printf("%s",b);
    return 0;
}