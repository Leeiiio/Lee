#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<sys/types.h>
#define UNUMBER 20
struct arg{
   float aver;
   int sum;
};

void show(int *a, int n);
void urand(int *a, int n);
struct arg operater(int *a, int n);
void mysort(int *a, int len);
int compare(const void *a, const void *b);
void syssort(int *a, int len);
