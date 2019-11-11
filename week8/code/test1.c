#include<stdio.h>
int main(int argc, char *argv[], char *env[])
{
   int i=0;
   for(;env[i];i++)
   {
     printf("%s\n",env[i]);
   }

   extern char **environ;
   int j=0;
   for(; environ[j]; j++)
   {
     printf("%s\n", environ[j]);
   }

   printf("%s\n", getenv("PATH"));
   
   return 0;
}
