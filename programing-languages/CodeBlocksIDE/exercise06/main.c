#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, counter, multiplication;

    printf("Enter a number between 1 and 10: ");
    scanf("%d", &number);

    counter = 1;
    while(counter <= 10)
    {
        multiplication = number*counter;
        printf("%d x %d = %d\n", number, counter, multiplication);
        counter = counter + 1;
    }

    return 0;
}
