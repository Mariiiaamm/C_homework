struct Girq
{
    char vernagir[20];
    int ej, gin;
};
struct person
{
    char AAH[31];
    struct Girq nkaragir;
};
#include <stdio.h>
int main(void)
{
    struct person table[50];
    int N, i, j, P;
    printf("Input count N=");
    scanf("%d", &N);
    while(getchar()!='\n') continue;
    for(i=0; i<N; i++)
    {
        printf("Input %d row\n", i);
        printf("Hexinaki AAH=");
        gets(table[i].AAH);
        printf("Hraparakvac grqer\n");
        for(j=1; j<=20; j++)
        {
            printf("Girq[%d]\n", j);
            printf("Vernagir=");
            gets(table[i].nkaragir.vernagir);
            printf("Cavaly ejov=");
            scanf("%d", &table[i].nkaragir.ej);
            while(getchar()!='\n') continue;
            printf("Giny=");
            scanf("%d", &table[i].nkaragir.gin);
            while(getchar()!='\n') continue;
        }
    }
    printf("Input P=");
    scanf("%d", &P);
    int k=0;
    for(i=0; i<N; i++)
    {
        k++;
        if(table[i].nkaragir.ej>200 && table[i].nkaragir.gin<P) printf("%d. %s %s\n", k, table[i].AAH, table[i].nkaragir.vernagir);
        else printf("%d. %s\n", k, table[i].AAH);
    }
    return 0;
}