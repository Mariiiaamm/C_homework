#include <stdio.h>
int main(void) 
{
    int n, j, i;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements:\n");
    for(j=0; j<n; j++)
        scanf("%d", &a[j]);
    for(j=0; j<n; j++) 
        for(i=8; i<=12; i++)
           if (((a[j] & 0xFF00) >> i)== 0b101) printf("%d ", a[j]);
    return 0;
}
