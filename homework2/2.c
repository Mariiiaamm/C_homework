#include <stdio.h>
int main(void) 
{
    int n, i;
    printf("Input a whole number: ");
    scanf("%d", &n);
    for(i=8; i<=15; i++)
        if (((n & 0xFF00) >> i)== 0b101) printf("Number 5 is present in bits 8 to 15.\n");
    return 0;
}