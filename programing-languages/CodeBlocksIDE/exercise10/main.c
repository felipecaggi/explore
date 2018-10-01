#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     int number, A = 0, B = 1, sum, counter = 2;

     printf("Enter a integer number: ");
     scanf("%d", &number);

     if(number >= 1)
        printf("\n0,");

     if(number >= 2)
        printf(" 1");

     while(counter<number)
     {
        sum = A + B;
        printf(", %d", sum);
        A = B;
        B = sum;
        counter = counter + 1;
     }

     printf("\n");

     return 0;
 }
