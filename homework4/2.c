struct person
{
    char AAH[31];
    char ser;
    int toshak;
    int G[5];
};
#include <stdio.h>
int main(void)
{
    struct person table[50];
    int N, i, j;
    printf("Input count N=");
    scanf("%d", &N);
    while(getchar()!='\n') continue;
    for(i=0; i<N; i++)
    {
        printf("Input %d row\n", i);
        printf("Usanoxi AAH=");
        gets(table[i].AAH);
        printf("Sery=");
        table[i].ser = getchar();
        printf("Qnnakan gnahatakannery\n");
        for(j=1; j<=5; j++)
        {
            printf("G[%d]=", j);
            scanf("%d", &table[i].G[j]);
            while(getchar()!='\n');
        }
        printf("Toshaki chapy=");
        scanf("%d", &table[i].toshak);
        while(getchar()!='\n');
    }
    for(i=0; i<N; i++)
        for(j=1; j<=5; j++)
        {
            int k=0;
            if(table[i].G[j]<41)
            {
                k++;
                printf("%d. %s G[%d]\n", k, table[i].AAH, j);
            }
        }
    return 0;
}