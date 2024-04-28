#include <stdio.h> 
int main(void) 
{ 
    int i, j, m, n; 
    printf("Input the number of rows and columns: "); 
    scanf("%d %d", &n, &m); 
    int b[n][m];
    printf("Input the elements of the matrix:\n"); 
    for(i=0; i<n; i++) 
        for(j=0; j<m; j++) 
            scanf("%d", &b[i][j]); 
    int max_row[n], min_col[m];
    for (int i = 0; i < n; i++) {
        max_row[i] = b[i][0];
        for (int j = 1; j < m; j++) {
            if (b[i][j] > max_row[i]) {
                max_row[i] = b[i][j];
            }
        }
    }
    for (int j = 0; j < m; j++) {
        min_col[j] = b[0][j];
        for (int i = 1; i < n; i++) {
            if (b[i][j] < min_col[j]) {
                min_col[j] = b[i][j];
            }
        }
    }
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[i][j] == max_row[i] && b[i][j] == min_col[j]) {
                printf("Element: %d at row %d and column %d\n", b[i][j], i+1, j+1);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("NO\n");
    }
    return 0;
}