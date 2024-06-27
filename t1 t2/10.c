#include <stdio.h>

int main() {
    int i,j,k=-1,n=-1;
    char x,a[50],b[50];
    printf("T:\n");
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    a[n+1]='\0';
    for(i=0;i<=n;i++)
    {
        int d=1;
        j=0;
        while(j<=n && d==1)
        {
            if(a[j]==a[i] && i!=j) d=0;
            j++;
        }
        if(d==1) b[++k]=a[i];
    }
    b[k+1]='\0';
    printf("%s\n",b);
    return 0;
}