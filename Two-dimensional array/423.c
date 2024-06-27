#include <stdio.h>
int main(void){
    int n, i, j, k, a, b;
    printf("Input the size of matrix, a and b numbers: ");
    scanf("%d %d %d", &n, &a, &b);
    int c[n][n]; k=0;
    printf("Input the elements: ");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            scanf("%d", &c[i][j]);
    for(i=1; i<=n-1; i++)
        for(j=1; j<=n-i; j++)
             if((c[i][j]>=a) && (c[i][j]<=b)) k++;
    printf("%d\n", k);
    return 0;
}