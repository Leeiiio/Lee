#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>
#include<unistd.h>
#include<time.h>
#include<sys/types.h>
#include<sys/time.h>
#include<unistd.h>
#define num 20

void randinit(int *a, int n);
int max(int *a, int n);
int sum(int *a, int n);
void show(int *a, int n);
