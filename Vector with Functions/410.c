#include <stdio.h>

int main()
{
   int X[] ={ -3, 2, -3, 0, 0, -3, 4, 5, 0, 0, 2 , 7, 11 ,7 ,7 ,7 , 7 };
	int N = sizeof(X) / sizeof(int);

   func_410( X,  N);

   return 0;
}


int deleteElem(int X[], int size, int elem) {
	for (int i = 0; i < size; ) 
	{
		if (X[i] == elem) {
			for (int j = i; j < size - 1; j++) {
				X[j] = X[j + 1];
			}
			size--;
		}
		else
			i++;
	}
	return size;
}


void func_410(int X[], int N) {
	// => -3, 2, -3, -3, 4, 5, 2 , 7, 11 ,7 ,7 ,7 , 7
	int size = N;
	for (int i = 0; i < size; i++)
	{
		int j, dupl = 1;
		for (j = 0; j < size; j++)
		{
			if (i != j && X[i] == X[j]) {
				dupl++;
			}

		}
		if (dupl == 4)
		{
			size = deleteElem(X, size, X[i]);
			break;
		}
	}

	// print
	for (int i = 0; i < size; i++) {
		printf("%d  ", X[i]);
	}
}