#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number, amount, average;
    float positiveCounter, negativeCounter;
    float positivePercentage, negativePercentage;

    printf("Enter multiple numbers\n");

    number = 1;
    while(number != 0)
    {
        scanf("%f", &number);
        amount = amount + number;

        if (number > 0)
        {
            positiveCounter = positiveCounter + 1;
        }
        else if (number < 0)
        {
            negativeCounter = negativeCounter + 1;
        }
    }

    average = amount / (positiveCounter+negativeCounter);

    positivePercentage = (positiveCounter / (positiveCounter+negativeCounter)) *100;
    negativePercentage = (negativeCounter / (positiveCounter+negativeCounter)) *100;

    printf("Average: %.2f\n", average);
    printf("Positive quantity: %.2f\n", positiveCounter);
    printf("Negative quantity: %.2f\n", negativeCounter);
    printf("Positive percentage: %.2f\n", positivePercentage);
    printf("Negative percentage: %.2f\n", negativePercentage);

    return 0;
}
