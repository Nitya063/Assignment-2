#include<stdio.h>
int main()
{
    int x,r;
    printf("Enter a 3-digit no..\n");
    scanf("%d",&x);
    r=x%10;
    x=x/10;
    x=(r*100)+x;
    printf("%d",x);
    return 0;
}


