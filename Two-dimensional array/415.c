#include <stdio.h>
int main(void)
{
    int m, i, j, q;
    printf("Input the size of matrix: ");
    scanf("%d", &m);
    int b[m][m]; q=0;
    printf("Input the elements of the matrix:\n");
    for(i=1; i<=m; i++)
        for(j=1; j<=m; j++)
            scanf("%d", &b[i][j]);
    for(i=2; i<=m; i++)
        for(j=1; j<=i-1; j++)
            if(b[i][j]%2==0) q++;
    printf("%d\n", q);
    return 0;
}