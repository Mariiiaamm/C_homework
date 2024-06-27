#include <stdio.h>
#include <stdbool.h>

void func_373(int X[], int N);

int main()
{
	int X[] = { 3, 2, 11, 4, 5, 2 , 1, 18};
	int N = sizeof(X) / sizeof(int);

	func_373(X, N);

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

void func_373(int X[], int N) {
	int sum = 0;
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (isPrime(X[i])) {
			sum += X[i];
			count++;
		}
	}

	printf("prime number count = %d, sum = %d \n", count, sum);;

}