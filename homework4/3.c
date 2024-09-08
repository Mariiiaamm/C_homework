struct members
{
    int wife_or_husband;
    int boy, girl;
};
struct person
{
    char AAH[31];
    char ser;
    struct members family;
    int wage;
};
#include <stdio.h>
int main(void)
{
    struct person table[50];
    int N, i, P, S=0; float W;
    printf("Input count N=");
    scanf("%d", &N);
    while(getchar()!='\n') continue;
    for(i=0; i<N; i++)
    {
        printf("Input %d row\n", i);
        printf("Ashxatakicneri AAH=");
        gets(table[i].AAH);
        printf("Sery=");
        table[i].ser = getchar();
        printf("Yntaniqi andamneri qanaky\n");
        printf("Kin(amusin)=");
        scanf("%d", &table[i].family.wife_or_husband);
        while(getchar()!='\n') continue;
        printf("txa erexa=");
        scanf("%d", &table[i].family.boy);
        while(getchar()!='\n') continue;
        printf("axjik erexa=");
        scanf("%d", &table[i].family.girl);
        while(getchar()!='\n') continue;
        printf("Ashxatavardz=");
        scanf("%d", &table[i].wage);
        while(getchar()!='\n') continue;
        S=1+table[i].family.wife_or_husband+table[i].family.boy+table[i].family.girl;
        W=table[i].wage/(float)S;
    }
    int l=0;
    printf("Input P=");
    scanf("%d", &P);
    for(i=0; i<N; i++)
    {
        if((table[i].ser=='m' && table[i].family.wife_or_husband==0) && (table[i].family.boy>=1 || table[i].family.girl>=1) && W<P) 
        {
            l++;
            printf("%d. %s\n", l, table[i].AAH);
        }
    }
    return 0;
}