#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the numbers.\n");
    scanf("%d%d",&x,&y);
    printf("x=%d,y=%d\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("x=%d,y=%d",x,y);
    return 0;
}

