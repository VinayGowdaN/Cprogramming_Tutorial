#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    {
      for(i=100;i<=200;i++)
      {
          if(i%8==0)
          printf("\n%d",i);
      }
        getch();
    }

}
