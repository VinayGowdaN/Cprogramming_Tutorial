#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,result=1;
    printf("enter the input number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    result=result*i;
    printf("factorial of %d is %d",n,result);
    return 0;
}
