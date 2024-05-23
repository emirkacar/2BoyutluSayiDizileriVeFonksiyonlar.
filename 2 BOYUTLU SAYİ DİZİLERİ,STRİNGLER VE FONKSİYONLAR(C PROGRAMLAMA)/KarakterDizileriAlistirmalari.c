#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[]={'e','m','i','r','\0'};
    char dizim[]="Emir";
    int i;

    for(i=0;i<strlen(dizi);i++)     //Strlen() kullanimi bu sekilde.
    {
        printf("%c",dizim[i]);
    }
    printf("\n");



    //Dizileri döngü yardimiyla ekrana bastirma algoritmasi.
    char dizi1[]="Bursa";
    i=0;
    char satir;

    while(1)
    {
        if(dizi1[i]=='\0')
        {
            break;
        }
        printf("Dizi1 'in %d.elemanni : %c\n",i+1,dizi1[i]);
        i++;

    }
    return 0;
}
