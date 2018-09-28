/*
 *  Author      :   Felipe Caggi
 *  Date        :   2018-09-28
 *  Description :   Receives two numbers, performs the sum and writes the result on the screen
 */

#include <stdio.h>

void main( )
{
    int a, b, c;

    printf("Please enter any two numbers: \n");
    scanf("%d %d", &a, &b);

    c = a + b;

    printf("The addition of two number is: %d", c);
}
