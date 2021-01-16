#include <stdio.h>
typedef struct stat {

    int ovr;
    int pac;
    int sho;
    int pas;
    int eri;
    int def;
    int phy;

    } Stat;

int main()
{

Stat player;


player.ovr=87;
player.pac=88;
player.sho=85;

printf(" overoll is %d", player.ovr);


return 0;
}
