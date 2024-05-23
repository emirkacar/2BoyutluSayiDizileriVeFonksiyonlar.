#include <stdio.h>
#include <stdlib.h>


void ustunu_al(int x,int y,int *r)
{
    *r=pow(x,y);

}

int main()
{
    int usAlma;
    int x=4;
    int y=5;

    ustunu_al(4,5,&usAlma);
    printf("%d uzeri %d = %d",x,y,usAlma);
    return 0;
}
