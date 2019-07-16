#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  for(i=100;i<=200;i++)
    {
  if(i%2==0)
    {

    continue;
    }
     if(i%5==0)
  {
      printf("%d\t",i);


  }
    }
    return 0;
}
