#include <stdio.h>
int main(void){
    int n, i, j, k;
    printf("Input the size of matrix: ");
    scanf("%d", &n);
    int b[n][n]; k=0;
    printf("Input the elements: ");
    for(i=1; i<=n; i++)
       for(j=1; j<=n; j++)
         scanf("%d", &b[i][j]);
    for(i=1; i<=n-1; i+=2)
       for(j=i+1; j<=n; j++)
          if(b[i][j]<0) k++;
    printf("%d\n", k);
    return 0;
}