#include <stdio.h>
int main ()
{
  float basicsal, dallowance, house_rent, grossal;
  printf("enter basic salary: \n");
  scanf("%f", &basicsal);

  dallowance = 0.4 * basicsal;
  house_rent = 0.2 * basicsal;

  grossal = basicsal + dallowance + house_rent;


  printf("\n Basic salary: %.2f", basicsal);
  printf("\n Dearness allowance: %.2f", dallowance);
  printf("\n House rent: %.2f", house_rent);
  printf("\n Gross salary: %.2f", grossal);

  
  return 0;
}
