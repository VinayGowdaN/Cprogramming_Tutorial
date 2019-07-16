#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m;
    printf("enter any number");
    scanf("%d",&n);
    printf("enter any number");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    printf("%d*%d=%04d\n",n,i,n*i);
    return 0;
}
