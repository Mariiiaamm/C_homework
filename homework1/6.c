#include <stdio.h> 
int main(void) 
{ 
    int i, j, m, n, z, u, k; 
    printf("Input the number of rows and columns: "); 
    scanf("%d %d", &m, &n); 
    int b[50][50]; u=0; 
    printf("Input the elements of the matrix:\n"); 
    for(i=0; i<m; i++) 
        for(j=0; j<n; j++) 
            scanf("%d", &b[i][j]); 
    for(i=0; i<m; i++) 
    { 
        k=0; 
        for(j=0; j<n; j++) 
            for(z=0; z<n; z++) 
                if(b[i][j]==b[i][z]) k++; 
    } 
    if(k==n) { u++; printf("%d\n", i); } 
    if(u==0) printf("NO\n"); 
    return 0; 
}