#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter a 3-digit no..\n");
    scanf("%d",&x);
    while(x!=0)
    {
        sum=sum+(x%10);
        x=x/10;
    }
    printf("Sum=%d",sum);
    return 0;
}


