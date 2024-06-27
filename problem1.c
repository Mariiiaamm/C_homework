#include <stdio.h>
int main(void){
    int b[5][5]={ {5, 4, -1, 3, 0},
                  {3, 0, 4, 2, 7},
                  {4, -3, 6, 5, -3},
                  {-5, 1, 2, -3, -2},
                  {0, -6, -3,1, 0}};
    int(*pm)[5], *pt;
    int k, y=1;
    for(pt=*b; pt<*b+5; pt=pt+2){
        pm=b;
        k=pt-*pm;
        for(pm=b; pm<b+5; pm++){
            if(*(*pm+k)>0) y*=*(*pm+k);
        }
    }
    printf("y=%d\n", y);
    return 0;
}