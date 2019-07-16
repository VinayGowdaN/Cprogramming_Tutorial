#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b);
void main()
{
    int a=5,b=10;
    printf("\nthe value before swapping:%d %d",a,b);
    swap(&a,&b);
    printf("\nthe value after swapping:%d %d",a,b);
}
void swap(int *p, int *q)
{
        int temp;
        temp=*p;
        *p=*q;
        *q=temp;
        getch();
}

