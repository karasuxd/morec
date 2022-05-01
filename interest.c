#include <stdio.h>
int main ()
{
  int p,n;
  float r,si;

  printf("enter the values of p,n,r: \n");
  scanf(" %i%i%f", &p, &n, &r);

  //formula for simple interest
  si = p * n * r/100;

  printf("simple interest =  %.3f\n", si);

  return 0;
}

/*P = Principal, R = Rate of Interest, and T = Time period.*/

//including the & operator is a must when using the scanf function
//it gives the location number (adress) used by the variable in memory
//when using scanf() with the & operator we are asking at which memory location
//should it store the value supplied by the user from the keyboard

/*
remember that variables can change during the process of executation, unlike the constants, which keep their values
constants are entitys whose value remains fixed*/
