#include <stdio.h> 
int main(void)
{
    int n, i, min, p;
    printf("Input the number of elements of vector: ");
    scanf("%d", &n);
    int x[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
    min=x[0];
    for(i=1; i<n; i++)
        if(x[i]<min) 
        {
            min=x[i];
            p=i;
        }
        printf("%d ", p);
    return 0;
}