#include <stdio.h>
int countOnes(int num) 
{
    int count = 0;
    while (num) 
    {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
int main(void) 
{
    int n, i, j;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++) 
    {
        int ones_count_i = countOnes(a[i]);
        for (j = i + 1; j < n; j++) 
        {
            int ones_count_j = countOnes(a[j]);
            if (ones_count_i == ones_count_j) printf("%d and %d\n", a[i], a[j]);
        }
    }
    return 0;
}