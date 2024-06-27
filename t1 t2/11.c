#include <stdio.h>

int main() {
    int i,j,n=-1;
    char x,a[50];
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    a[n+1]='\0';
    for(i=0;i<=n;i++)
    {
        j=0;
        int d=1;
        while(j<=n && d==1)
        {
            if(a[j]==a[i] && i!=j) d=0;
            j++;
        }
        if(d==0)
        {
            int k=0;
            char m=a[i];
            for(j=i;j<=n;j++)
            {
                if(a[j]==m) k++;
                else a[j-k]=a[j];
            }
            n-=k;
            i--;
        }
    }
    a[n+1]='\0';
    printf("%s",a);
    return 0;
}