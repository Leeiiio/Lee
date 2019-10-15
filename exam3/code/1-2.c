#include "ourhdr.h"
#define BUFFSIZE 8192

int main(void)
{
   int n;
   char buf[BUFFSIZE];
   while((n = read(STDIN_FILENO, buf, BUFFSIZE)) >0 )
	perror("write error");
   if(n<0)  perror("read error");
   exit(0);
}
