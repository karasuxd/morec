#include <math.h>//the math library is being used to ensure that the pow() function works correctly
#include <stdio.h>
int main ()
{
  float a;
  a = pow(3.0, 2.4);
  printf("%.2f\n", a);
}

//pow() function is a standard library function, this function works only with real numbers
