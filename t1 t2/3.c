#include <stdio.h>
#define DOT '.'

int main() {
    int i=0,k,j,count=0,n=-1;
    char x,a[50];
    printf("T:\n");
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    while(i<n && a[i]!='p') i++;
    if(i<n)
    {
        k=i;
        j=n-1;
        while(j>i && a[j]!='p') j--;
        if(j>k)
        {
            for(i=k+1;i<j;i++)
            {
                if(a[i]<'p') printf("%c=%d\n",a[i],a[i]),count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}