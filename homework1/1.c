#include <stdio.h> 
#include <math.h> 
int main(void) 
{ 
    int n, m, i, j, S, q; float P; 
    printf("input the number of rows and columns: "); 
    scanf("%d %d", &n, &m); 
    int b[n][m]; 
    printf("Input the elements of the matrix:\n"); 
    for(i=1; i<=n; i++) 
    { 
        for(j=1; j<=m; j++) 
            scanf("%d", &b[i][j]); 
    } 
    for(i=1; i<=n; i++) 
    { 
        S=0; q=0; 
        for(j=1; j<=m; j++) 
        { 
            if(b[i][j]>0) q++; 
            S+=b[i][j]*b[i][j];  
        } 
    if(q==0)  
    { 
        P=sqrt(S/(float)m); 
        printf("Mean square of elements in row %d: %f\n", i, P); 
    } 
    else printf("Number of positive elements in row %d: %d\n", i, q); 
    } 
    return 0; 
}
