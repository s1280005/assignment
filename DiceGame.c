#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,n,m,sum=0;

  printf("Rolling the dice...\n");

  n=rand()%6+1;
  m=rand()%6+1;
  sum=n+m;
  printf("Die 1:%d\n",n);
  printf("Die 2:%d\n",m);
  printf("Total value:%d\n",sum);

  return 0;
}
