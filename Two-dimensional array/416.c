#include <stdio.h>
int main(void)
{
    int m, i, j, S;
    printf("Input the size of matrix: ");
    scanf("%d", &m);
    int b[m][m]; S=0;
    printf("Input the elements of the matrix:\n");
    for(i=1; i<=m; i++)
        for(j=1; j<=m; j++)
            scanf("%d", &b[i][j]);
    for(i=1; i<=m-1; i++)
        for(j=1; j<=m-i; j++)
            if(b[i][j]%2==0) S+=b[i][j];
    printf("%d\n", S);
    return 0;
}