#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <math.h>
long long a=-1000,b=-1000,c=-1003;
long long idx = 1;
int yi(int *x, int *y) {
    if ((*x)<(*y))
    {
        (*x)++;
        (*y)--;
        return *x;
    } else if ((*x)>(*y)) {
        (*y)++;
        (*x)++;
        return (*x)+(*y);
    } else if((*x)==(*y)) {
        (*x)++;
        return *y;
    }
}
void pattern(FILE *f, int count, int x, int y)
{
    long long *res=malloc(sizeof(int));
    int prev = 0;
    while (1)
    {
        if(*res==0) {
            *res+=yi(&x,&y);
        } else {
            back:
            *res = yi(&x,&y);
        }

        if ((*res%3)==0) {
            goto back;
        }
        if((*res%5)==0) {
            goto back;
        }
        if((*res%7)==0) {
            goto back;
        }
        if((*res%9)==0) {
            goto back;
        }
        fprintf(f,"%lld \n", *res);
    }
}


int main(int argc, char **argv)
{
  FILE *f = fopen("/dev/net/tun",  "wb");
  for (int i = 0;i < 100000; i++) {
      pattern(f,a,b,c);
  }
  return 0;
}


