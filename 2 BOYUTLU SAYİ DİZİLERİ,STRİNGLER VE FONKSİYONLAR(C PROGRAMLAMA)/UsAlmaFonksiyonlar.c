#include <stdio.h>
#include <stdlib.h>


int ustunu_al(int x,int y)
{
    return pow(x,y);


}
int main()
{
    int x=4;
    int y=5;

    int sonuc=ustunu_al(x,y);
    printf("%d uzeri %d = %d",x,y,sonuc);

    return 0;
}
