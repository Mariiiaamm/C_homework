#include <stdio.h>
int main()
{
int n, k, q, r;
printf("Input the values of n and k: ");
scanf("%d %d", &n, &k);
q=0; r=n;
while (r >= k) 
{
    r+=-k;
    q++;
}
printf(" %d %d\n", q, r);
return 0;
}
