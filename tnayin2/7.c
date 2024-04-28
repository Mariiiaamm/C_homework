#include <stdio.h>
int main(void) 
{
    int n, j;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements:\n");
    for(j=0; j<n; j++)
        scanf("%d", &a[j]);
    for(j=0; j<n; j++) 
    {
        int first_eight = 255;      // 0000000011111111
        int second_eight = 65280;   // 1111111100000000
        first_eight = (a[j] & first_eight);
        second_eight = (a[j] & second_eight) >> 8;
        if(first_eight == second_eight) printf("%d ", a[j]);
    }
    return 0;
}