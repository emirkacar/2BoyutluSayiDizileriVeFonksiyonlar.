#include <stdio.h>
#include <stdlib.h>

int main()
{
    //String icersindeki herhangi bir karakteri degistirme.

    char dizi[]="Emir";  // Diziyi tanımlayıp başlatıyoruz
    dizi[0]='K'; // Dizinin ilk elemanını değiştiriyoruz
    printf("%s",dizi); // Diziyi yazdırıyoruz

    return 0;
}
