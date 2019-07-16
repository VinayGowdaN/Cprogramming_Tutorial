#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    printf("enter the input");
    scanf("%d",&input);
    (input%2==0)?printf("even number"):printf("odd number");
    return 0;
}
