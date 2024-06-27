#include <stdio.h>

int func_358(int X[], int N);

int main()
{
	int X[] = { 3, 2, 3, -5, 2 };
	int N = sizeof(X) / sizeof(int);

	printf("Y = %d \n", func_358(X, N));

    return 0;
}


int getFirstNegativeIndex(int X[], int N) {
	int ind = -1;
	for (int i = 0; i < N; i++) {
		if (X[i] < 0) {
			ind = i;
			break;
		}
	}
	return ind;
}

int func_358(int X[], int N) {
	int ind = getFirstNegativeIndex(X, N);

	if (ind == -1)
		return 0;

	int s = X[0];
	int prev = X[0];
	for (int i = 1; i <= ind; i++) {
	      	int mult = prev * X[i];
		s += mult;
		prev = mult;
	}

	return s;
}