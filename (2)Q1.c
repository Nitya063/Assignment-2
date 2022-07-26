#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no.\n");
    scanf("%d",&n);
    printf("Unit digit of %d is = %d",n,(n%10));
    return 0;
}
