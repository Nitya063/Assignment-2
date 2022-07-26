#include <stdio.h>
int main()
{
    int n,count=1,res=0;
    printf("Enter the no.\n");
    scanf("%d",&n);
    while(n!=0)
    {
        res=n&1;
        if(res==1)
    {
        printf("%d", count);
        break;
    }
    count++;
    n=n>>1;
    }
    return 0;
}
