#include <stdio.h>
#include <stdbool.h>
int main(void) 
{
    int N;
    printf("Input the number of elements in the vector: ");
    scanf("%d", &N);
    int X[N];
    int *ptrX = X;
    printf("Input the elements of the vector: ");
    for (int i = 0; i < N; i++)
        scanf("%d", &X[i]);
    bool T = false;
    int consecutive_zeros = 0;
    for (int i = 0; i < N; i++) 
    {
        if (*(ptrX + i) == 0) 
        {
            consecutive_zeros++;
            if (consecutive_zeros == 5) 
            {
                T = true;
                break;
            }
        } else consecutive_zeros = 0;
    }
    printf("T: %s\n", T ? "true" : "false");
    return 0;
}
