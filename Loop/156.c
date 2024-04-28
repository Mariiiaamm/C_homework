#include <stdio.h>
int main(void)
{
    int i, k; float C, Z, S;
    printf("Input the value of C: ");
    scanf("%f", &C);
    Z=0;
    for(i=1; i<=5; i++)
    { 
        S=0;
        {
            for(k=1; k<=8; k++) S+=(C*i+k)/(float)k;
        } Z+=i*i*S;
    } printf("%f\n", Z);
    return 0;
}