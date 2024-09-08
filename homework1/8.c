#include <stdio.h> 
int main(void)  
{ 
    int n, m, i, j, t; 
    printf("Input the number of rows and columns: "); 
    scanf("%d %d", &n, &m); 
    int b[50][50]; 
    printf("Input the elements of the matrix:\n"); 
    for(i=0; i<n; i++) 
        for(j=0; j<m; j++) 
            scanf("%d", &b[i][j]); 
    for(i=0; i<n; i++)  
        for(j=0; j<m/2; j++)  
        { 
            t=b[i][j]; 
            b[i][j]=b[i][m-1-j]; 
            b[i][m-1-j]=t; 
        } 
    for(i=0; i<n; i++) 
    { 
        for (j=0; j<m; j++) 
            printf("%d ", b[i][j]); 
        printf("\n"); 
    } 
    return 0; 
}
