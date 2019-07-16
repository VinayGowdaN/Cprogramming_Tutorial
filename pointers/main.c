#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a=5;
    int *p;
    printf("value:%d\n",a);
    printf("address:%u\n",&a);
    p=&a;
    printf("the value at address of a %d\n",*p);

}
