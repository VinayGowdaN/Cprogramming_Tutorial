#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    printf("enter the input");
    scanf("%d",&input);
    if(input==0)
    printf("the number is zero");
    else if(input%2==0)
    printf("%d the number is even",input);
    else
    printf("%d the number is odd",input);
    return 0;
}
