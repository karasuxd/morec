//calculation of gross salary
//Da = dearness allowance, Hra = house rent allowance

#include <stdio.h>
int main ()
{
  float bs, gs, da, hra;

  printf("enter basic salary:\n");
  scanf(" %f", &bs);
  
  if (bs < 1500)
  {
    hra = bs * 10 / 100;
      da = bs * 90 / 100;
  } 
         else
         {
            hra = 500;
             da = bs * 98 / 100;
         }

                 gs = bs + hra + da;
                   printf("gross salary = %f\n", gs);

                     return 0;
}

/*explanation:
 *
 * if the basic salary is less than 1500. then HRA = 10% of basic salary, and DA = 90%
 * if the basic salary is either equal to or above 1500, then HRA = 500 and DA = 98%
