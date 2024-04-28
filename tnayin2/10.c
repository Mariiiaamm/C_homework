#include <stdio.h>
int main(void) 
{
    int n, i;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
    {
        int property = a[i];
        int correct = 1;
        int last = property & 1? 0 : 1;
        while (property && correct)
        {
            if(property & 1)
            {
                if(!last)
                {
                    correct = 1;
                    last = 1;
                }else correct = 0;
            }else{
                if(last)
                {
                    correct = 1;
                    last = 0;
                }else correct = 0;
            }
            property >>= 1;
        }
        if(correct)
            printf("%d ",a[i]);
    }
    return 0;
}