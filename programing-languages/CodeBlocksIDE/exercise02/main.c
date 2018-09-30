#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Enter an age: ");
    scanf("%d", &age);

    if(age < 16)
    {
        printf("Non-voter");
    }
    else if(age >= 18 && age < 65 )
    {
        printf("Mandatory voter" );
    }
    else if((age >= 16 && age < 18) || age >= 65)
    {
        printf("Optional voter");
    }

    return 0;
}
