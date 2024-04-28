#include <stdio.h>
#include <math.h>
int main(void) 
{
    int n, m;
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);
    int matrix[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int count[n];
    for (int i = 0; i < n; i++) {
        count[i] = 0;
        for (int j = 0; j < m; j++) {
            int k = 0;
            while (pow(2, k) < matrix[i][j]) {
                k++;
            }
            if (k > 0 && k < m) {
                count[i]++;
            }
        }
    }
    printf("Number of members of each row satisfying the condition:\n");
    for (int i = 0; i < n; i++) {
        printf("Row %d: %d\n", i+1, count[i]);
    }
    return 0;
}