#include <stdio.h>

void func_2(int X[], int N);

int main()
{
   //int N = 8;
   int X[] = { -1, 2,0, -3, 4, 5, 2, 0, 121, -11};
	int N = sizeof(X) / sizeof(int);
	
   func_2( X,  N); 

   return 0;
}

void print(int Y[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%d  ", Y[i]);
	}
}

void func_2(int X[], int N) {
	int Y[N];
	int len= 0;
	for (int i = 0;  i < N; i++) {
		if (X[i] < 0) {
			Y[len++] = X[i];
		}
	}
	for (int i = 0;  i < N; i++) {
		if (X[i] == 0) {
			Y[len++] = X[i];
		}
	}
	for (int i = 0;  i < N; i++) {
		if (X[i] > 0) {
			Y[len++] = X[i];
		}
	}
	
	print(Y, len);
}