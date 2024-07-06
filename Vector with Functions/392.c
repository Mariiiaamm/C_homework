#include <stdio.h>

void func_392(int X[], int N);

int main()
{
	int X[] = { -1, 2, -3, 0, 0, 0, 0, 4, 5, 0, 0, 2 , 0, 0, 1 ,0, 0, 0 };
	int N = sizeof(X) / sizeof(int);
	
	func_392(X, N);
    return 0;
}

void func_392(int X[], int N) {
	int max_zero_count = 0, count = 0;

	for (int i = 0; i < N; i++) {
		if (X[i] != 0) {
			count = 0;
		}
		else {
			count++;
		}
		if (max_zero_count < count)
			max_zero_count = count;
	}
	
	printf("max zero count = %d \n", max_zero_count);
}