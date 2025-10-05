#include<stdio.h>

int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    int week = 7;

    int clear_days = week-(X+Y);
    printf("%d\n",clear_days);

    return 0;

}

