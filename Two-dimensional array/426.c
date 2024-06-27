#include <stdio.h>
int main(void){
    int n, i, j, a, b, q, S; float P;
    printf("Input the size of matrix, a and b numbers: ");
    scanf("%d %d %d", &n, &a, &b);
    int c[n][n]; q=0; S=0;
    printf("Input the elements: ");
    for(i=1; i<=n; i++)
       for(j=1; j<=n; j++)
           scanf("%d", &c[i][j]);
    for(i=2; i<=n; i++)
       for(j=1; j<=i-1; j++)
          if((c[i][j]>=a) && (c[i][j]<=b)) {
            S+=c[i][j];
            q++;
          }
    if(q!=0) P=S/(float)q;
    printf("%d\n", P);
    return 0;
}