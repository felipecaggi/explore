#include <stdio.h>
#include <stdlib.h>

int main()
{
    int years;
    float heightChico;
    float heightZe;

    heightChico = 1.5;
    heightZe = 1.1;

    while (heightChico > heightZe)
    {
        heightChico = heightChico + 0.02;
        heightZe = heightZe + 0.03;

        years = years + 1;
    }

    printf("It will take %d years for Ze to be bigger than Chico", years);

    return 0;
}
