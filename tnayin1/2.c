#include <stdio.h> 
int main(void)  
{ 
    int n, m, i, j, l, g, q, S, P, G; 
    printf("Input the number of rows and columns: "); 
    scanf("%d %d", &n, &m); 
    int b[n][m]; 
    printf("Input the elements of the matrix:\n"); 
    for(i=1; i<=n; i++) 
        for(j=1; j<=m; j++) 
            scanf("%d", &b[i][j]); 
    int maxElement=l, maxRow=g, maxCol=q; 
    l=b[1][1], g=1, q=1; 
    for(i=1; i<=n; i++) 
        for(j=1; j<=m; j++)
            if(b[i][j]>l) 
                l=b[i][j], g=i, q=j; 
    S=0; P=0; 
    for(j=1; j<=m; j++) S+=b[g][j]; 
    for(i=1; i<=n; i++) P+=b[i][q]; 
    G=S+P; 
    printf("%d\n", G); 
    return 0; 
}
