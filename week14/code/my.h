#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<wait.h>
#include<time.h>
#include<errno.h>
#include<fcntl.h>
#include<signal.h>
#include<string.h>
#include<pthread.h>
#include<limits.h>

#define NUM 4
struct sendval{
   int n;
   int s;
};
