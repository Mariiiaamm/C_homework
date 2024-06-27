#include <stdio.h>
#include <ctype.h>
#define DOT '.'

int main() {
    int i=0,f,k=0,j,n=-1;
    char x,a[50];
    printf("T:\n");
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    do
    {
        while(i<n && a[i]!=DOT) i++;
        if(i<n)
        {
            int count=0;
            j=i+1;
            while(j<=n && a[j]!=DOT) j++;
            if(j<=n)
            {
                k++;
                for(int p=i+1;p<j;p++)
                {
                    if(isalpha(a[p])) 
                    {
                        f=0;
                        switch(a[p])
                        {
                            case'A':case'a':
                            case'E':case'e':
                            case'I':case'i':
                            case'O':case'o':
                            case'U':case'u':
                            f=1;
                            break;
                        }
                    if(f==0) count++;  
                    }
                }
                printf("%d:count=%d\n",k,count);
            }
        }
        i=j;
    }while(i<n);
    return 0;
}