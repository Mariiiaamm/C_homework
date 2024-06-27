#include <stdio.h>
int f2();
int f1(){
    printf("f1() \n"); return f2();
}
int f2(){
    printf("f2() \n"); return 2;
}
int f3(){
    printf("f3() \n"); return 3;
}
int f4(){
    printf("f4() \n"); return 4;
}
int f5(){
    printf("f5() \n"); return 5;
}
int foo(int a, int b, int c, int d){
    printf("foo();\n");
    printf("a=%d\n", a);
    return f3() + f4();
}
int main(){
    foo(f1(), 3, 4, 5);
}