#include <stdio.h> 
int main(void) 
{ 
    int i, j, n, m, k; 
    printf("Input the number of rows and columns: "); 
    scanf("%d %d", &m, &n); 
    int b[30][30]; int a[30]; k=0; 
    printf("Input the elements of the matrix:\n"); 
    for(i=0; i<m; i++) 
        for(j=0; j<n; j++) 
            scanf("%d", &b[i][j]); 
    for(j=0; j<n; j++) 
    { 
        int max=b[j][0]; 
        for(i=0; i<m; i++) 
            if(max<b[i][j]) max=b[i][j]; 
        a[k]=max; 
        k++; 
    } 
    int min=a[0]; 
    for(i=0; i<k; i++) 
        if(min>a[i]) min=a[i]; 
    printf("%d\n", min); 
    return 0; 
}