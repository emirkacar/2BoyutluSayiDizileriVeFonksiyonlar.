#include <stdio.h>
#include <stdlib.h>

int main()
{
    //String icersindeki herhangi bir karakteri degistirme.

    char dizi[]="Emir";  // Diziyi tan�mlay�p ba�lat�yoruz
    dizi[0]='K'; // Dizinin ilk eleman�n� de�i�tiriyoruz
    printf("%s",dizi); // Diziyi yazd�r�yoruz

    return 0;
}
