#include <stdio.h>
#include <stdlib.h>
//Iki sayinin toplami fonksiyonlar ile
int topla(int x,int y)
{
  return x+y;
}

int main()
{
    int x;
    int y;

    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);

    int sonuc=topla(x,y);
    printf("%d + %d = %d",x,y,sonuc);
    return 0;
}
