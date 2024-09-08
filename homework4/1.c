struct data
{
    int day, year;
    char month[10];
};
struct address
{
    char city[15];
    char street[15];
    int house, apartment;
};
struct phone
{
    char home[12], mob[12];
};
struct person
{
    char AAH[31];
    struct data birth;
    struct address home;
    struct phone her;
};
#include <stdio.h>
int main(void)
{
    struct person table[50];
    int N, i;
    printf("Input count N=");
    scanf("%d", &N);
    while(getchar()!='\n') continue;
    for(i=0; i<N; i++)
    {
        printf("Input %d row\n", i);
        printf("Andzi AAH=");
        gets(table[i].AAH);
        printf("Cnndyan tivy=");
        scanf("%d.%s.%d", &table[i].birth.day, &table[i].birth.month, &table[i].birth.year);
        while(getchar()!='\n') continue;
        printf("Hasce\n");
        printf("qaxaq, gyux=");
        gets(table[i].home.city);
        printf("poxoc=");
        gets(table[i].home.street);
        printf("tun=");
        scanf("%d", &table[i].home.house);
        while(getchar()!='\n') continue;
        printf("bnakaran=");
        scanf("%d", &table[i].home.apartment);
        while(getchar()!='\n') continue;
        printf("Heraxos\n");
        printf("tan=");
        gets(table[i].her.home);
        printf("bjjayin=");
        gets(table[i].her.mob);
    }
    int k=0;
    for(i=0; i<N; i++)
    {
        if (table[i].home.city[0] == 'V' && table[i].home.city[1] == 'a' &&
            table[i].home.city[2] == 'n' && table[i].home.city[3] == 'a' &&
            table[i].home.city[4] == 'd' && table[i].home.city[5] == 'z' &&
            table[i].home.city[6] == 'o' && table[i].home.city[7] == 'r' &&
            table[i].her.mob[0] == '0' && table[i].her.mob[1] == '9' &&
            table[i].her.mob[2] == '5' && table[i].birth.year < 2004) 
            {
            k++;
            printf("%d. %s\n", k, table[i].AAH);
            }
    }
    return 0;
}