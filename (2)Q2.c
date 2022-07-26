#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no.\n");
    scanf("%d",&n);
    printf("%d WITHOUT ITS LAST DIGIT = %d",n,(n/10));
    return 0;
}

