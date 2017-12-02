#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "Equality.h"

int main(void)
{
 int err=0,countOfElements=0;
 int result;
 int number=2,pow=5;
 err=fastPowExec(number, pow, &result);
 printf("%i\n",result);
 if(err!=0)
  printf("Error!!!\n");
return err;
}
