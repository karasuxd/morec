#include <stdio.h>
int main (){
  int i = 2, j = 3, k, l;
  float a, b;

  k = i / j * j;
  i = j / i * i;
  a = i / j * j;
  b = j / i * i;

  printf("%d%d%f%f\n", k,i,a,b);
  return 0;

}
