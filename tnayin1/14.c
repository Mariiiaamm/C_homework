#include <stdio.h> 
int main(void)  
{ 
    int n, i, j, k; 
    printf("Input the size of the square matrix: "); 
    scanf("%d", &n); 
    int a[n][n];  
    printf("Input the elements of the matrix:\n"); 
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    int X[n*n]; k=0;  
    for(i=0; i<n; i++)  
    { 
        if(a[i][i]==0) 
            for(j=0; j<n; j++)  
                X[k++]=a[i][j]; 
    } 
    for(i=0; i<k; i++) 
        printf("%d ", X[i]); 
    printf("\n"); 
    return 0; 
}
