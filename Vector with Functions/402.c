#include <stdio.h>
#include <stdbool.h>

void func_402(int X[], int N);

int main()
{
	int X[] = { 4, 12,53, 33,121,11 };
	int N = sizeof(X) / sizeof(int);
	
	func_402(X, N);

    return 0;
}

bool isPrime(int nmb) {
   
	for (int i = 2; i < nmb; i++)
   {
     if (nmb % i == 0) {
         return false;
     }
   }
   return true;
}

void func_402(int X[], int N){
	int max_prime = 0;

	for (int i = 0; i < N; i++) {
		if (isPrime(X[i])) {
			if (max_prime == 0) {
				max_prime = X[i];
			}
			else if (max_prime < X[i]) {
				max_prime = X[i];
			}
		}

	}
	if (max_prime == 0)
		printf("No \n");
	else
		printf("max prime = %d \n", max_prime);
}