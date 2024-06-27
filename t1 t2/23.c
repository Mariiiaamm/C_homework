#include <stdio.h>
#include <string.h>
#define DOT '.'
#define SPACE ' '

int main()
{
    int i,p,k=-1,j,n=-1;
    char x,m[20],a[50],b[30][20];
    while((x=getchar())!=DOT)
    {
        n++;
        a[n]=x;
    }
    n++;
    a[n]=DOT;
    n++;
    a[n]='\0';
    i=0;
    do
    {
        while(i<=n && a[i]==SPACE) i++;
        if(i<n)
        {
            j=i;
            k++;
            while(i<=n && a[i]!=SPACE && a[i]!=DOT) i++;
            for(p=j;p<i;p++) b[k][p-j]=a[p];
            b[k][i-j]='\0';
        }
        i++;
    }while(i<n);
    for(i=0;i<=k;i++)
        {
            for(j=i+1;j<=k;j++)
            {
                if(strlen(b[j])>strlen(b[i]))
                {
                    strcpy(m,b[i]);
                    strcpy(b[i],b[j]);
                    strcpy(b[j],m);
                }
            }
        }
    printf("Sorted strings:");
    for(i=0;i<=k;i++)
    printf("%s\n",b[i]);
    return 0;
}