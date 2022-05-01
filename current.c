#include <stdio.h>
int main (){
  int bonus, cy, yoj, yos;

  printf("enter current year and year of joining: \n");
  scanf(" %d%d", &cy, &yoj);

  yos = cy - yoj;

  if (yos > 3)
    bonus = 2500;
    printf("Bonus = %d\n", bonus);

  return 0;
}

/*If the number of years for which the employee has served the organization is
greater than 3, then a bonus of Rs. 2500/- is given to the employee. If
the years of service are not greater than 3, then the program should do
nothing.*/ 
