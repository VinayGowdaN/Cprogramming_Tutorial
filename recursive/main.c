#include <stdio.h>
#include <conio.h>
int factorial(int n);
int

 main()
{
 int n=5,i;
 printf("factorial of %d is %d",n,factorial(n));
}
int factorial(int n)
 {
   if(n==0)
   return 1;
   else
   return n*factorial(n-1);
 }

