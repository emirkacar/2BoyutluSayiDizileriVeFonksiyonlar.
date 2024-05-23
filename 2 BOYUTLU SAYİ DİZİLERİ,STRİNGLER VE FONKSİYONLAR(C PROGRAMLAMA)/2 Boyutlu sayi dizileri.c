#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[2][3][2];
    int i,j,k;
    int toplam=0;
    int sayac=0;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d. okulun %d.sinifin %d.ogrencisinin notu = ",i+1,j+1,k+1);
                scanf("%d",&dizi[i][j][k]);
                toplam+=dizi[i][j][k];
                sayac++;
            }
        }
    }
    printf("\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d. okulun %d.sinifin %d.ogrencisinin notu = %d\n",i+1,j+1,k+1,dizi[i][j][k]);

            }
        }
    }
    printf("Notlarin toplami : %d\n",toplam);
    printf("Notlarin ortalamasi : %.2f",(float)toplam/sayac);








    return 0;
}
