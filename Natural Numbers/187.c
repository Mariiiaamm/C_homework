#include <stdio.h>
#include <math.h>
int main(void)
{
    unsigned int x, y, z, l; float m;
    printf("Input natural numbers x and y: ");
    scanf("%d %d", &x, &y);
    m=sqrt(x+y); l=2;
    while ((l<=m) && ((x+y)%l!=0)) l++;
        if(l>m) z=5; else z=6;
    printf("%d\n", z);
    return 0;
}