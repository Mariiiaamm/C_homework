#include <stdio.h>
int main(void) 
{
    int n, m, i, j, k;
    printf("Input the number of rows and columns: "); 
    scanf("%d %d", &n, &m);
    int b[n][m];
    printf("Input the elements of the matrix:\n"); 
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
             scanf("%d", &b[i][j]);
    k=0;
    for(j=0; j<m; j++) 
    {
        i=0; 
        while((i<n) && (b[i][j]<0)) i++;
        if(i==n) k++;
        else if(k>0) 
            for(i=0; i<n; i++)
                b[i][j-k]=b[i][j]; 
    }
    for(i=0; i<n; i++) 
    {
        for(j=0; j<m-k; j++)
            printf("%d ", b[i][j]);
    printf("\n");
    }
    return 0;
}