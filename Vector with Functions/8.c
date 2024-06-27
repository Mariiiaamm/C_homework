#include <stdio.h>
#include <stdbool.h>

bool isSimmetric(int N) {
    int reverseN = 0;
    int temp = N;

    // Reverse the digits of the number
    while (temp != 0) {
        int digit = temp % 10;
        reverseN = reverseN * 10 + digit;
        temp = temp / 10;
    }
    
    if (N == reverseN)
      return true;

	return false;
}


int main()
{
   int N = 122; // natural
   //scanf("%d", &N);

   int arr[N];
   int len = 0;
   
   for (int i = 1; i < N; i++) {
	if (isSimmetric( i)) {
		arr[len++] = i;
	}
   }
	
   for( int i=0; i<len; i++)
      printf("%d ", arr[i]); 
    
   return 0;
}