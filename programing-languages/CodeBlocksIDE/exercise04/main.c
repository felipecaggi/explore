#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dish, dessert, drink, calories;

    printf("(Dish) 1: Vegetarian, 2: Fish, 3: Chicken, 4: Meat\n");
    printf("(Desserts) 1: Pineapple, 2: Diet ice cream, 3: Diet mouse, 4: Mouse chocolate\n");
    printf("(Drinks) 1: Cha, 2: Orange juice, 3: Juice of molasses, 4: Dietary soda\n");

    printf("Chosse a dish: ");
    scanf("%d", &dish);
    printf("Chosse a dessert: ");
    scanf("%d", &dessert);
    printf("Chosse a drink: ");
    scanf("%d", &drink);

    switch(dish)
    {
        case 1:
            calories = 180;
            break;
        case 2:
            calories = 230;
            break;
        case 3:
            calories = 250;
            break;
        case 4:
            calories = 350;
    }

    switch(dessert)
    {
        case 1:
            calories = calories + 75;
            break;
        case 2:
            calories = calories + 110;
            break;
        case 3:
            calories = calories + 170;
            break;
        case 4:
            calories = calories + 200;
    }

    switch(drink)
    {
        case 1:
            calories = calories + 20;
            break;
        case 2:
            calories = calories + 70;
            break;
        case 3:
            calories = calories + 100;
            break;
        case 4:
            calories = calories + 65;
    }

    printf("Total amount of calories: %d calories\n", calories);

    return 0;
}
