#include <stdio.h>
int main(void){
    int n, i, j, P;
    printf("Input the size of matrix: ");
    scanf("%d", &n);
    int b[n][n]; P=0;
    printf("Input the elements: ");
    for(i=1; i<=n; i++)
       for(j=1; j<=n; j++)
         scanf("%d", &b[i][j]);
    for(i=1; i<=n-1; i++)
       for(j=i+1; j<=n; j++)
          if((i+j)%2==0) P+=b[i][j];
    printf("%d\n", P);
    return 0;
}