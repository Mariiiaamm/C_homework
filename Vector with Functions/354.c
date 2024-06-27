#include <stdio.h>

int func_354(int X[], int N);

int getLastMinIndex(int X[], int N);


int main()
{
	int X[] = { 3, 2, -3, 1, 4, -5, 2 };
	int N = sizeof(X) / sizeof(int);

	printf("%d \n", func_354(X, N));

    return 0;
}


int func_354(int X[], int N) {
	int ind = getLastMinIndex(X, N);

	if (ind == 0)
		return 0;

	int mult = 0;
	for (int i = 0; i < ind; i++) {
		if (X[i] > 0){
		   if(mult == 0)
		      mult = 1;
			mult *= X[i];
		}
	}
	return mult;
}

int getLastMinIndex(int X[], int N) {
	int min = X[0];
	int ind = 0;
	for (int i = 0; i < N; i++) {
		if (X[i] <= min) {
			ind = i;
			min = X[i];
		}
	}
	return ind;
}