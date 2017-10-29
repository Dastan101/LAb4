#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[])
{
  enum days{mon,tue,thur,fri};
  enum days today=thur-tue;
  printf("Value %e\n",today);
  return 0;
}


