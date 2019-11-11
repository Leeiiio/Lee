#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int x=100;
int main()
{
   int y=0;
   static int w=33;
   printf("test1:pid=%d,ppid=%d\n",getpid(),getppid());
   printf("test1:address x=%d,y=%d,w=%d\n",&x,&y,&w);
   sleep(10);
   return 0;
}

/*mian(int argc, char argv[])
for(i=0;i<argc;i++)
printf("%d:%s\n",i,argv);

./test1 ABC 123 456

char arg[]={"./test1","ABC","123","456"};
*/
