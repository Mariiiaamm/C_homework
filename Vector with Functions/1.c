#include <stdio.h>
#include <stdbool.h>

double func_1(int X[], int N);

int main()
{
	int arr[] = { -3, 2, 8, 4, 5, 121 };
	int n = sizeof(arr) / sizeof(int);

	double avg = func_1(arr, n);

	printf("avg = %f \n", avg );

    return 0;
}

bool isPower(int n) {
   for (int i = 2; i <= n / 2; i++) {
      int pow = 1;  // power of i
      while (pow < n){
        pow *= i; // // i*i*i*i
      }
      if(pow == n)  
         return true;
   }
  return false;
}


double func_1(int arr[], int n) {
	double sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (isPower(arr[i])) {
			sum += arr[i];
			count++;
		}
	}
	if (count > 0)
		return sum / count;
	else
		return 0;
}