#include <stdio.h>
int main(void){
    int m, n, i, j, P, min, q;
    printf("Input the sizes of matrix: ");
    scanf("%d %d", &m, &n);
    int b[m][n]; 
    printf("Input the elements: ");
    for(i=1; i<=m; i++)
       for(j=1; j<=n; j++)
           scanf("%d", &b[i][j]);
    min=b[1][1]; q=0;
    for(j=1; j<=n; j++){
        P=1;
        for(i=1; i<=m; i++)
            P*=b[i][j];
        if(P<min) {min=P; q=j;}
    }
    printf("%d\n", q);
    return 0;
}