#include <stdio.h> 
#include <math.h> 
int main(void)  
{ 
    double X; 
    int n; 
    printf("Input the value of X: "); 
    scanf("%lf", &X); 
    printf("Input the number of elements in the array: "); 
    scanf("%d", &n); 
    double Y[n]; 
    double *ptri = Y;
    int *ptrn = &n;
    printf("Enter the elements of the array: "); 
    for (int i = 0; i < n; i++) 
        scanf("%lf", &Y[i]); 
    int k = -1; 
    for (int i = 0; i < n; i++) 
        if (X > pow(*(ptri+i), i) && X < pow(*(ptri+i), i+1))  
        { 
            k = i+1; 
            break; 
        } 
    if (k != -1) 
        printf("The natural number k satisfying the condition is: %d\n", k); 
    else 
        printf("NO.\n"); 
    return 0; 
}