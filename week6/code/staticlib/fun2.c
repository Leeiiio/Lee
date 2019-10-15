#include "my.h"
int max(int *a, int n)
{
   int i=0;
   int j,t;
   for(i=0; i<n; i++)
   {
	for(j=0; j<n-i-1; j++)
	{
	  if(a[j] > a[j+1])
	  {
	    t = a[j];
	    a[j] = a[j+1];
	    a[j+1] = t;
	  }
	}
   }
   return a[n-1];
}
