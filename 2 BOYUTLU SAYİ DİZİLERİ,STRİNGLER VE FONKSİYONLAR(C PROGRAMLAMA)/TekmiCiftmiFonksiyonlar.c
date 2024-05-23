#include <stdio.h>
#include <stdlib.h>

//Sayinin tek mi cift mi oldugunu bulan program(Fonksiyonlar ile)
void tekCift(int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        if(i%2==0)
        {
            printf("%d cift sayidir.\n",i);
        }
        else
        {
            printf("%d tek sayidir.\n",i);
        }
    }



}




int main()
{
    int sayi = 100;


    tekCift(sayi);
    return 0;
}
