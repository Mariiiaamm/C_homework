#include <stdio.h>
int main(void)
{
    int i; float x, y, S;
    printf("Input the values of x and y: ");
    scanf("%f %f", &x, &y);
    S=0; i=1;
    while(i<=16)
    {
        if(i%2==1) {x=i; y=i*i;} else {x=i*i*i; y=i;}
        S+=(x-y)*(x-y);
        i++;
    }
    printf("%f\n", S);
    return 0;
}