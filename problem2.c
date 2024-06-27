#include <stdio.h>
int func(int ar[], int*);
int main(){
    int a[10]={5,4,-1,-3,-1,5,8,5,0,-5};
    int i, n=10;
    func(a, &n);
    if(n>0){
        for(i=0; i<n; i++)
            printf("%d, ", a[i]);
        printf("\n");
    }
    else printf("No elements\n");
    return 0;
}
int func(int ar[], int*p)
{
    int i=0, j, k;
    if(*p>0){
        while (i<*p-1){
            j=i+1;
            while(j<*p){
            if(ar[i]==ar[j]){
                for(k=j; k<*p-1; k++){
                    ar[k]=ar[k+1];
                }
                *p-=1;
            }
            else j++;
        }
        i++;
      }
    }
    return *p;
}