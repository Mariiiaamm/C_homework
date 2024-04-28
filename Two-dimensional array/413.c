#include <stdio.h>
#include <math.h>
int main(void)
{
    int m, i, j, p, q; float S;
    printf("Input the size of matrix: ");
    scanf("%d", &m);
    int b[m][m]; p=0; q=0;
    printf("Input the elements of the matrix:\n");
    for(i=1; i<=m; i++)
        for(j=1; j<=m; j++)
            scanf("%d", &b[i][j]);
    for(i=1; i<=m; i++)
        for(j=1; j<=i; j++)
            if(b[i][j]%2==0) 
            {
                p+=b[i][j]*b[i][j];
                q++;
            }
    if(q>0) S=sqrt(p/(float)q);
    printf("%f\n", S);
    return 0;
}