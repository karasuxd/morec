#include <stdio.h>
int main ()
{
  int qty, dis = 0;
  float rate, tot;

  printf("Enter quantity and rate\n");
  scanf("%d%f ", &qty, &rate);
  
  tot = (qty*rate) - (qty*rate*dis/100);

  if (qty > 1000){
    dis = 10;
    printf("Total expenses = %.2f\n", tot);
    printf("u received an discount!");
  }
  else{
   
    printf("Total expenses = Rs.%.2f\n", tot);
  }

  return 0;
}

//a discount of 10% is offered if the quantity is more than 1000
