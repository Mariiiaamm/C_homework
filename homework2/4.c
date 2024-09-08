#include <stdio.h>
int main(void) 
{
    char ch; int k=0;
    printf("Input char in octal: ");
    scanf("%c", &ch);
    int first_four = 1; // 00000001
    int last_four = 0200; // 10000000
    int i;
    for (i=1; i<=4; i++) 
    {
        first_four = (first_four & ch); 
        last_four = (last_four & ch) << 4;
        if ((first_four >> (i - 1)) == (last_four << (7 - i))) k++;
        else 
        {
            printf("The binary number is not symmetric around its center:\n"); 
            break;
        }
    } 
    if(k==4) printf("The binary number is symmetric around its center:\n");
    return 0;
}