struct kino
{
    char anun[20];
    int seria;
};
struct person
{
    char anvanum[31];
    struct kino kinonkar;
    int skizb_jam, skizb_rope, verj_jam, verj_rope;
    char hasce[31];
};
#include <stdio.h>
#include <string.h>
int main(void)
{
    struct person table[50];
    char kinonkari_anvanum[31];
    int N, i;
    printf("input count N=");
    scanf("%d", &N);
    while(getchar()!='\n') continue;
    for(i=0; i<N; i++)
    {
        printf("Input %d row\n", i);
        printf("Kinotatroni anvanumy=");
        gets(table[i].anvanum);
        printf("Kinonkar\n");
        printf("Filmi anuny=");
        gets(table[i].kinonkar.anun);
        printf("Serianeri qanaky=");
        scanf("%d", &table[i].kinonkar.seria);
        while(getchar()!='\n') continue;
        printf("Skizb (jam.rope)=");
        scanf("%d.%d", &table[i].skizb_jam, &table[i].skizb_rope);
        while(getchar()!='\n') continue;
        printf("Verj (jam.rope)=");
        scanf("%d.%d", &table[i].verj_jam, &table[i].verj_rope);
        while(getchar()!='\n') continue;
        printf("Hasce=");
        gets(table[i].hasce);
    }
    printf("Kinonkari anvanum=");
    gets(kinonkari_anvanum);
    for(i=0; i<N; i+=2)
    {
        if(strcmp(table[i].kinonkar.anun,kinonkari_anvanum)==0) 
        printf("%s %s %d.&d-%d.%d, %s %s %d.&d-%d.%d", table[i].anvanum, table[i].hasce, table[i].skizb_jam, table[i].skizb_rope, table[i].verj_jam, table[i].verj_rope);
    }
    return 0;
}