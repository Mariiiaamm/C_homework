#include <stdio.h>
#include<math.h>
int main(void)
{
    int n, i, S; float k;
    printf("Input the number of elements and the value of k: ");
    scanf("%d %f", &n, &k);
    S=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(fabs(a[i])<k) S+=a[i]*a[i]*a[i];
    }
    printf("%d\n", S);
    return 0;
}