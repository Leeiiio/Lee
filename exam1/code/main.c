#include "myhead.h"
#include<sys/time.h>
#include<unistd.h>

int main()
{
   int data1[UNUMBER];
   int data2[UNUMBER];
   struct timeval t1,t2;
   struct timezone tz;
   struct arg str;

   urand(data1,UNUMBER);
   for(int i=0; i<UNUMBER; i++)
   {
     data2[i] = data1[i];
   }
   show(data1,UNUMBER);
   printf("after system sort:\n");
   gettimeofday(&t1,&tz); 
   syssort(data1,UNUMBER);
   gettimeofday(&t2,&tz); 
   show(data1,UNUMBER);
   printf("the time of system sort:%d\n", t2.tv_usec-t1.tv_usec);

   gettimeofday(&t1,&tz); 
   mysort(data2,UNUMBER);
   gettimeofday(&t2,&tz);
   printf("after mysort:\n");
   show(data2,UNUMBER);
   printf("the time of mysort:%d\n",t2.tv_usec-t1.tv_usec);
   return 0;
}
