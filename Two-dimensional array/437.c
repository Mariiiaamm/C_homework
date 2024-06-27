#include <stdio.h>
int main(void){
    int n, i, j, a, P;
    printf("Input the size of matrix and a: ");
    scanf("%d %d", &n, &a);
    int b[n][n]; P=1;
    printf("Input the elements: ");
    for(i=1; i<=n; i++)
       for(j=1; j<=n; j++)
         scanf("%d", &b[i][j]);
    for(i=1; i<=n; i++)
       for(j=n-i+1; j<=n; j++)
          if(b[i][j]<a) P*=b[i][j];
    printf("%d\n", P);
    return 0;
}