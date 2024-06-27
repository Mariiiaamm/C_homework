#include <stdio.h>

int func_341(int X[], int N, int k);

int main()
{
	int X[] = { 3, 2, -3, 4, 5, 1 };
	int N = sizeof(X) / sizeof(int);

	printf("%d \n", func_341(X, N, 6));
	
   return 0;
}

int func_341(int X[], int N, int k) {
	int sum = 0;
	for (int i = 1; i < N-1; i++) {
		if (X[i-1] + X[i + 1] < k)
			sum += X[i];
	}
	return sum;
}