#include <stdio.h>
#include <stdlib.h>


int enBuyukSayi(int dizi[],int uzunluk)
{
    int enBuyuk=dizi[0];
    int i;

    for(i=0;i<uzunluk;i++)
    {
        if(enBuyuk < dizi[i])
        {
            enBuyuk=dizi[i];
        }
    }
    return enBuyuk;
}

int main()
{
    int dizi[]={5,6,100,264,20,1,1800,-5,16,24,57};
    int uzunluk=sizeof(dizi)/sizeof(dizi[0]);
    int enBuyuk=enBuyukSayi(dizi,uzunluk);

    printf("En buyuk sayi = %d",enBuyuk);

}
