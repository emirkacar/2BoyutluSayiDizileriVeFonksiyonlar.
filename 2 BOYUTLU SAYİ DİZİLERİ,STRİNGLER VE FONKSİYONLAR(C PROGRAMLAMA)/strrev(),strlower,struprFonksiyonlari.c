#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //strrev() kullanimi. (Bir stringi ters cevirir.)

    char dizi[]="Emir";
    strrev(dizi);

    printf("%s\n",dizi);


    //strlower kullanimi   (Dizideki butun karakterleri kucuk harfe cevirir.)
    char dizim[]="EMIR";
    strlwr(dizim);
    printf("%s",dizim);



    //Strupr kullanimi (Dizideki butun karakterleri buyuk harfe cevirir.)



    char dizim1[100];
    printf("Lutfen dizinizi giriniz: ");
    gets(dizim1);

    printf("Dizinin elemanlarini buyuk harfe cevirilmis hali : %s",strupr(dizim1));
    return 0;
}
