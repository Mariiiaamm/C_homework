#include <stdio.h> 
#include <limits.h> 
int main(void)  
{ 
    int n, m, i, j, p, g, c; 
    printf("Input the number of rows and columns: "); 
    scanf("%d %d", &n, &m); 
    int b[n][m]; 
    printf("Input the elements of the matrix:\n"); 
    for(i=1; i<=n; i++) 
        for(j=1; j<=m; j++) 
            scanf("%d", &b[i][j]); 
    int minProduct=p, minColumn=c; 
    p=INT_MAX; 
    for(j=1; j<=m; j++)  
    { 
        int product=g; g=1; 
        for(i=1; i<=n; i++) 
            g*=b[i][j]; 
        if(g<p) 
            p=g, c=j; 
    } 
    printf("%d\n", c); 
    return 0; 
}
