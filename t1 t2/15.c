#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i,k,m,n=-1;
    char x,a[50];
    bool b=false;
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    a[n+1]='\0';
    for(i=0;i<=n;i++)
    {
        k=0,m=0;
        if(a[i]=='(')
        {
            while(a[i]!=')')
            {
                if(a[i]=='(') k++;
                i++;
            }
        }
        if(a[i]==')')
        {
            while(a[i]!='(')
            {
                if(a[i]==')') m++;
                i++;
            }
        }
        if(m==k) b=true;
    }
    if(b==true) printf("TRUE\n");
    else printf("FALSE");
    return 0;
}