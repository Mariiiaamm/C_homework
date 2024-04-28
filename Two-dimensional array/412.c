#include <stdio.h>
int main(void)
{
    int m, i, j, p, q; float S;
    printf("Input the size of matrix: ");
    scanf("%d", &m);
    int b[m][m];
    printf("Input the elements of the matrix:\n");
    for(i=1; i<=m; i++)
        for(j=1; j<=m; j++)
            scanf("%d", &b[i][j]);
    p=0; q=0;
    for(i=2; i<=m; i++)
        for(j=1; j<=i-1; j++)
            if(b[i][j]%5==0) 
            {
                p+=b[i][j];
                q++;
            }
    if(q!=0) S=p/(float)q;
    printf("%f\n", S);
    return 0;
}