#include "/home/lee/Desktop/Linux/week6/dynamiclib/mylib.h"

int main()
{
   int a[num];
   void * handle;
   int(*finit)();
   int(*f1)();
   int(*f2)();
   int(*f3)();
   char * error;;
   handle = dlopen("/home/lee/Desktop/Linux/week6/dynamiclib/libdynamiclib.so",RTLD_LAZY);
   if(!handle)
   {
	perror("load failed.\n");
	exit(1);
   }
   finit=dlsym(handle,"randinit");
   if((error = dlerror())!= NULL)
   {
	fprintf(stderr,"%s\n",error);
	exit(1);
   }
   f1=dlsym(handle,"show");
   if((error = dlerror())!= NULL)
   {
	fprintf(stderr,"%s\n",error);
	exit(1);
   }
   f2=dlsym(handle,"max");
   if((error = dlerror())!= NULL)
   {
	fprintf(stderr,"%s\n",error);
	exit(1);
   }
   f3=dlsym(handle,"sum");
   if((error = dlerror())!= NULL)
   {
	fprintf(stderr,"%s\n",error);
	exit(1);
   }
   
   finit(a,num);
   f1(a,num);
   printf("max=%d\n", f2(a,num));
   printf("sum=%d\n", f3(a,num));
   if(dlclose(handle)<0){
	fprintf(stderr,"%s\n",error);
	exit(1);
   }
   return 0;
}
