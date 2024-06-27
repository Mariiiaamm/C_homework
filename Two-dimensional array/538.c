#include <stdio.h> 
int main(void) 
{ 
    int i, j, m, n, z, g, k; 
    printf("Input the number of rows and columns: "); 
    scanf("%d %d", &m, &n); 
    int b[50][50]; int a[50]; k=0; 
    printf("Input the elements of the matrix:\n"); 
    for(i=0; i<m; i++) 
        for(j=0; j<n; j++) 
            scanf("%d", &b[i][j]); 
    for(i=1; i<m; i++) 
    { 
        z=0; 
        for(j=0; j<n; j++) 
            for(g=0; g<n; g++) 
                if(b[i][j]==b[0][g]) z++; 
        if(z==n) k++; 
    } 
    printf("%d\n", k); 
    return 0; 
}
