#include <stdio.h>
#include <math.h>
int main(void){
    int n, i, j, S, q; float P;
    printf("Input the size of matrix: ");
    scanf("%d", &n);
    int b[n][n]; q=0; S=0;
    printf("Input the elements: ");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            scanf("%d", &b[i][j]);
    for(i=1; i<=n; i++)
        for(j=1; j<=n-i+1; j++)
            if((i+j)%2!=0){
                S+=b[i][j]*b[i][j];
                q++;
            }
    if(q>0) P=sqrt(S/(float)q);
    printf("%f\n", P);
    return 0;
}