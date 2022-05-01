#include <stdio.h>
int main (void)
{
  printf(maximum(1, 2, 3));
  
}

int maximum(int a, int b, int c){
  int max;

  if (a > b)
    if (a > c)
      max = a;
    else
      max = c;
  else 
    if (b > c)
      max = b;
    else
      max = c;
  
  printf("%d\n", max);

  
  
}
