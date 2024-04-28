#include <stdio.h>
#include<math.h>
int main(void)
{
    int n, i, P; float t;
    printf("Input the number of elements and the value of t: ");
    scanf("%d %f", &n, &t);
    P=1; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(fabs(a[i])<t) P*=a[i];
    }
    printf("%d\n", P);
    return 0;
}