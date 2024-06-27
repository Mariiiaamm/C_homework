#include <stdio.h>
#include <ctype.h>
#define DOT '.'

int main() {
    int i,k=0,n=-1;
    char x,a[50];
    printf("T:\n");
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    for(i=0;i<n;i++)
    {
        if(isalpha(a[i]))
        {
            int f=0;
            switch(a[i])
            {
                case'A':case'a':
                case'E':case'e':
                case'I':case'i':
                case'O':case'o':
                case'U':case'u':
                f++;
                break;
            }
            switch(a[i+1])
            {
                case'A':case'a':
                case'E':case'e':
                case'I':case'i':
                case'O':case'o':
                case'U':case'u':
                f++;
                break;
            }
            if(f==0) k++;
        }
    }
    if(k>0) printf("k=%d",k);
    else printf("No");
    return 0;
}