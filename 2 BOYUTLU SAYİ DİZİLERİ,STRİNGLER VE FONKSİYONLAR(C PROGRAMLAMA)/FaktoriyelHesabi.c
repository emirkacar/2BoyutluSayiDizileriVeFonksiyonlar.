#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{
    int carpim=1;
    while(sayi>1)
    {
        carpim*=sayi;
        sayi--;
    }
    return carpim;
}




int main()
{
    int sayi,sonuc;
    printf("Lutfen sayiyi giriniz: ");
    scanf("%d",&sayi);

    sonuc = faktoriyel(sayi);
    printf("Faktoriyel sonucu = %d",sonuc);

    return 0;
}
