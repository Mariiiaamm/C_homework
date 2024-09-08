#include <stdio.h>

int main(void) 
{
    char ch; 
    printf("Input char in octal: ");
    scanf("%c", &ch);

    char first_four[4], last_four[4], symmetric_elements[4];
    last_four[3] = (0200 & ch) >> 7;

    int i;
    for (i = 0; i < 4; i++) {
        first_four[i] = (1 << i) & ch; 
        last_four[i] = (1 << (3 - i)) & ch;
        if (first_four[i] == last_four[i]) {
            symmetric_elements[i] = first_four[i]; // Store symmetric element
        } else {
            break;
        }
    } 
    
    if (i == 4) {
        printf("Symmetric elements: ");
        for (int j = 0; j < 4; j++) {
            printf("%d ", symmetric_elements[j]);
        }
        printf("\n");
    }
    
    return 0;
}