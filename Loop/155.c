#include <stdio.h>
int main(void)
{
    int i, k; float C, Z, P;
    printf("Input the value of C: ");
    scanf("%f", &C);
    Z=0;
    for(i=1; i<=7; i++)
    { 
        P=1;
        {
            for(k=1; k<=8; k++) P*=i*i+C*k;
        } Z+=P;
    } printf("%f\n", Z);
    return 0;
}