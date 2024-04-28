#include <stdio.h> 
int main(void)  
{ 
    int n, i, j, l; 
    printf("Input the size of the square matrix: "); 
    scanf("%d", &n); 
    int a[n][n]; l=a[1][0]; 
    printf("Input the elements of the matrix:\n"); 
    for(i=1; i<=n; i++) 
        for(j=1; j<=n; j++) 
            scanf("%d", &a[i][j]); 
    for(i=1; i<=n-1; i++) 
        for(j=1; j<=n-i; j++) 
            if(a[i][j]<l) l=a[i][j]; 
    printf("%d\n", l); 
    return 0; 
}
