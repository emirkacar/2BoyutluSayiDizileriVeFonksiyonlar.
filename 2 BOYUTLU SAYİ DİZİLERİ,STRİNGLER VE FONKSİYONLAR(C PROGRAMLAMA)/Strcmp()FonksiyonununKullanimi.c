#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    //Strcmp Fonksiyonunun kullanimi

    char karakter1[100]="Emir";   //Maksimum 100 karakter alabilir demek.
    char karakter2[100]="Kacar";

    if(strcmp(karakter1,karakter2)==0)   //ASCII Kodlarina göre karsilastirma yapar.
    {
        printf("Iki karakter aynidir.");
    }
    else
    {
        printf("Iki karakter birbirinden farklidir.");
    }
    return 0;




    return 0;
}
