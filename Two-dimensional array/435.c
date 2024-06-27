#include <stdio.h>
int main(void){
    int n, i, j, k, q;
    printf("Input the size of matrix and k: ");
    scanf("%d %d", &n, &k);
    int b[n][n]; q=0;
    printf("Input the elements: ");
    for(i=1; i<=n; i++)
       for(j=1; j<=n; j++)
         scanf("%d", &b[i][j]);
    for(i=2; i<=n; i++)
       for(j=1; j<=i-1; j++)
          if(fabs(b[i][j])>k) q++;
    printf("%d\n", q);
    return 0;
}