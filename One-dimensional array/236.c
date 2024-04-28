#include <stdio.h>
#include<math.h>
int main(void)
{
    int n, i, q; float k;
    printf("Input the number of elements and the value of k: ");
    scanf("%d %f", &n, &k);
    q=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(fabs(a[i])<k) q++;
    }
    printf("%d\n", q);
    return 0;
}