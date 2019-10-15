#include "my.h"
int main()
{
   int data[num];
   randinit(data, num);
   show(data, num);
   printf("\n");
   printf("the max number is: %d\n",max(data, num));
   return 0;
}
