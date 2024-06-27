#include <stdio.h>
#include <math.h>
int main(void){
    int n, i, j, S;
    printf("Input the size of matrix: ");
    scanf("%d", &n);
    int b[n][n]; S=0;
    for(i=1; i<=n; i++)
       for(j=1; j<=n; j++)
          scanf("%d", &b[i][j]);
    for(i=1; i<=n; i++)
       for(j=n-i+1; j<=n; j++)
           if((fabs(b[i][j])>=5.4) && (fabs(b[i][j])<=15.3)) S+=b[i][j];
    printf("%d\n", S);
    return 0;
}