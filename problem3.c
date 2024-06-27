#include <stdio.h>
#include <stdbool.h>
bool f1(int ar[], int);
int f2(int ar[], int);
int main(){
    int vec[50]={16,9,3,0,-4,-10,-11,-7,-2,1,5,12};
    int k, n=12;
    if(f1(vec, n)){
        f2(vec, n);
    }
    for(int j=0; j<n; j++) printf("%d, ", vec[j]);
    printf("\n");
    return 0;
}
bool f1(int ar[], int p)
{
    int i=0, j=p-1, s=0;
    bool f=true;
    while(i<j && f){
        if(s==0){
            if(ar[i]>ar[j]){
                s=1; i++;
            }
            else f=false;
        }
        else if(ar[j]>ar[i]){
            s=0; j--;
        }
        else f=false;
    }
    return f;
}
int f2(int ar[], int p)
{
    int i=0, j=p, s=0, k=0;
    while(i<j){
        k++;
        if(s==0){
            ar[i++]=k; s=1;
        }
        else { ar[--j]=k; s=0;}
    }
    return 0;
}