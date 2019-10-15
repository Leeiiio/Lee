#include "myhead.h"

struct arg operater(int *a, int n)
{
   int i;
   int sum=0;
   float aver;
   struct arg b;
   for(i=0; i<n; i++)
	sum = sum+a[i];
	aver = (float)sum/n;
   b.sum = sum;
   b.aver = aver;
   return b; 
}

void show(int *a, int n)
{
   for(int i=0; i<n; i++)
     printf("  %d", a[i]);
   printf("\n");
}

void urand(int *a, int n)
{
   int i;
   srand((int)time(0));
   for(i=0;i<n;i++)
      a[i]=1+(int)(100.0*rand()/(RAND_MAX+1.0));
}

void mysort(int *a, int len)
{
   int i=0;
   int j,t;
   for(i=0; i<len; i++)
   {
	for(j=0; j<len-i-1; j++)
	{
	  if(a[j] > a[j+1])
	  {
	    t = a[j];
	    a[j] = a[j+1];
	    a[j+1] = t;
	  }
	}
   }
}

int compare(const void *a, const void *b)
{
   const int *p = a;
   const int *q = b;
   return *p - *q;
}

void syssort(int *a, int len)
{
   qsort(a, len, sizeof(a[0]), compare);
}

