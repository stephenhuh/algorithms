#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void flippingbits(unsigned int ar[], int T)
{
  int i = 0;
  while (i < T){
  ar[i] = ~ar[i];
  i++;
  }
}

int main()
{
  printf("size of unsigned int is %lu", sizeof(unsigned int));
  int T, i = 0, j = 0;
  scanf("%d", &T);
  unsigned int ar[T];
  while (i < T){
    scanf("%u", &ar[i]);
    i++;
  }

  printf("your array is size of %d\n", T);
  while (j < T){
    printf("here's how it looks:\n [%d] %u \n", j, ar[j]);
    j++;
  }
  j=0;
  flippingbits(ar, T);
  printf("your array is size of %d\n", T);
  while (j < T){
    printf("here's how it looks:\n [%d] %u \n", j, ar[j]);
    j++;
  }

  return 0;
}
