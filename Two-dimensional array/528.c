#include <stdio.h>
int main(void){
    int m, n, i, j, S, max, q;
    printf("Input the sizes of matrix: ");
    scanf("%d %d", &m, &n);
    int b[m][n];
    printf("Input the elements: ");
    for(i=1; i<=m; i++)
       for(j=1; j<=n; j++)
         scanf("%d", &b[i][j]);
    max=b[1][1]; q=0;
    for(i=1; i<=m; i++){
        S=0;
       for(j=1; j<=n; j++)
            S+=b[i][j];
       if(S>max) {max=S; q=i;}
    }
    printf("%d\n", q);
    return 0;
}