#include <stdio.h>
int main(void)
{
    int m, i, j, k, q;
    printf("Input the size of matrix and the value of k: ");
    scanf("%d %d", &m, &k);
    int b[m][m]; q=0;
    printf("Input the elements of the matrix:\n");
    for(i=1; i<=m; i++)
        for(j=1; j<=m; j++)
            scanf("%d", &b[i][j]);
    for(i=2; i<=m; i++)
        for(j=1; j<=i-1; j++)
            if(b[i][j]%k==0) q++;
    printf("%d\n", q);
    return 0;
}