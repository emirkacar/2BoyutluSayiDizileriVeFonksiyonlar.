#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Strlen() Kullanimi

    char dizi[]="Emir";
    int uzunluk=strlen(dizi);    //Bir degiskene atildi.
    printf("Dizinin uzunlugu : %d\n",uzunluk);

    //Sizeof() kullanimi

    uzunluk=sizeof(dizi)-sizeof(dizi[0]);
    printf("Dizinin uzunlugu : %d\n",uzunluk);
    return 0;

}
