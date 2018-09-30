#include <stdio.h>
#include <stdlib.h>

int main()
{
   float averageBalance, creditValue;

   printf("Enter an average balance: ");
   scanf("%f", &averageBalance);

   if( averageBalance > 500 && averageBalance <= 1000)
   {
     creditValue  = 0.3 * averageBalance;
   }
   else if( averageBalance >= 1001 && averageBalance <= 3000)
   {
     creditValue  = 0.4 * averageBalance;
   }
   else if( averageBalance > 3000)
   {
     creditValue  = 0.5 * averageBalance;
   }

   printf("Average balance: %.2f\n Credit value: %.2f", averageBalance, creditValue);

    return 0;
}
