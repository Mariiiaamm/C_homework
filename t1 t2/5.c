#include <stdio.h>
#include <ctype.h>
#define DOT '.'

int main() {
    int i=0,f,s=0,k=0,j,n=-1;
    char x,a[50];
    printf("T:\n");
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    for(i=0;i<=n;i++)
    {
        if(isalpha(a[i])) 
        {
            f=0;
            switch(a[i])
            {
                case'A':case'a':
                case'E':case'e':
                case'I':case'i':
                case'O':case'o':
                case'U':case'u':
                f=1;
                break;
            }
            int p=a[i];
            if(f==1) {
                s+=p;
                k++;
            }
            
        }
    }
    printf("k=%d\n",k);
    s/=k;
    printf("s=%d",s);
    return 0;
}