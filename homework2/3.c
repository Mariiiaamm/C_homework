#include <stdio.h>
int main(void)
{
    int n;
    printf("Input a whole number: ");
    scanf("%d",&n);
    int first_eight = 255;      // 0000000011111111
    int second_eight = 65280;   // 1111111100000000
    first_eight = (n & first_eight);
    second_eight = (n & second_eight) >> 8;
    if(first_eight == second_eight)
        printf("Match");
    else
        printf("Don't match");
}