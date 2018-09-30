#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int interval1, interval2, interval3, interval4;

    interval1 = 0;
    interval2 = 0;
    interval3 = 0;
    interval4 = 0;

    printf("Enter multiple numbers\n");

    while(number >= 0)
    {
        scanf("%d", &number);

        if (number >= 0 && number <= 25)
        {
            interval1 = interval1 + 1;
        }
        else if (number >= 26 && number <= 50)
        {
            interval2 = interval2 + 1;
        }
        else if (number >= 51 && number <= 75)
        {
            interval3 = interval3 + 1;
        }
        else if (number >= 76 && number <= 100)
        {
            interval4 = interval4 + 1;
        }
    }

    printf("[0-25]: %d\n", interval1);
    printf("[25-50]: %d\n", interval2);
    printf("[51-75]: %d\n", interval3);
    printf("[76-100]: %d", interval4);

    return 0;
}
