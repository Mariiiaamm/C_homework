#include <stdio.h>
int calculate(char op_code, int num1, int num2){
    printf("Calculate is called \n");
    if(op_code == '+'){
        return num1 + num2;    
    }
    if(op_code == '-'){
        return num1 - num2;
    }
    if(op_code == '*'){
        return num1 * num2;
    }
    if(op_code == '/' && num2 != 0){
        return num1 / num2;
    }
    return 0;
}
int max(int a, int b){
    printf("Max is called\n");
    return a>b ? a:b;
}
int min(int a, int b){
    printf("Min is called\n");
    return a<b ? a:b;
}
int main(){
    int res = calculate('+', max(13, 9), min(14, 15));
    printf("%d\n", res);
}