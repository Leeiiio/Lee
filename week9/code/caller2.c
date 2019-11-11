#include "my.h"
int main()
{
  int ret;
  printf("caller2:pid=%d,ppid=%d\n",getpid(),getppid());
  //ret=system("/home/lee/Desktop/Linux/week9/test1");
  execl("/home/lee/Desktop/Linux/week9/test2","./test2","123","456",NULL);
  printf("after calling!\n");
  sleep(1);
  return 0;
}
