#include <stdio.h>
#include <stdlib.h>


int asalKontrolu(int sayi)
{
    int i,j,asalMi;

    for(i=2;i<=sayi;i++)
    {
        asalMi=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                asalMi=0;
            }
        }

    }
    if(asalMi)
    {
        return 1;
    }
    else
    {
        return 0;

    }
}



int main()
{
    int sayi,asal;
    printf("Lutfen sayiyi giriniz: ");
    scanf("%d",&sayi);

    if(asalKontrolu(sayi))
    {
        asal=1;
    }
    else
    {
        asal=0;
    }
    if(asal)
    {
        printf("Sayi asaldir.");
    }
    else
    {
        printf("Sayi asal degildir.");
    }

    return 0;
}
