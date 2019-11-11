#include "my.h"
int main()
{
  int ret;
  printf("caller1:pid=%d,ppid=%d\n",getpid(),getppid());
  ret=system("/home/lee/Desktop/Linux/week9/test1");
  printf("after calling!\n");
  return 0;
}
