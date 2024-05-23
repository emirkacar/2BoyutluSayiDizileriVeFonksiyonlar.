#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //strncpy() Fonksiyonunun Kullanimi
    char ad[]="Benim adim Emir Kacar";
    char soyad[]="Bursa";

    strncpy(ad,soyad,4);
    printf("%s\n",ad);





    //strcat Fonksiyonunun Kullanimi (Ýki stringi birlestirir)

    char dizi[100];
    strcpy(dizi,"Benim");
    strcat(dizi," Adim Emir Kacar");
    strcat(dizi," Bursaliyim");

    printf("%s\n",dizi);


    //gets ve fgets arasindaki fark

    char isim[100];
    printf("Isminizi giriniz: ");
    gets(isim);
    printf("\n\n");

    printf("Isminizi giriniz: ");
    fgets(isim,sizeof(isim),stdin);


    return 0;
}
