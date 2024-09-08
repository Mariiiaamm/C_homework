#include <stdio.h> 
int main(void) 
{ 
    int i, j, n, z; 
    printf("Input the size of the square matrix: "); 
    scanf("%d", &n); 
    int b[50][50];
    printf("Input the elements of the matrix:\n"); 
    for(i=0; i<n; i++) 
        for(j=0; j<n; j++) 
            scanf("%d", &b[i][j]); 
    for(i=0; i<n; i++)
    {
        z=0;
        for(j=0; j<n; j++)
            if(b[i][j]==b[j][i]) z++;
        if(z==n) printf("%d\n", i);
    }
    return 0;
}