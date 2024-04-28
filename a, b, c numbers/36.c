#include<stdio.h>

int main(void) 
{
    int a, b, c;
    printf("Input three different numbers:");
    scanf("%d %d %d", &a, &b, &c);
    while (a==b || a==c || b==c);
         if(a%2==0 || b%2==0 || c%2==0) printf("1\n");
         else  printf("2\n");
    return 0;
}