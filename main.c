#include <stdio.h>
#include "functions.h"

int main(void)
{
    int nb1 = 20;
    int nb2 = 10;

    printf("Addition : %d\n", add(nb1, nb2));
    printf("Soustraction : %d\n", sub(nb1, nb2));
    printf("Multiplication : %d\n", mul(nb1, nb2));
    printf("Division : %d\n", divi(nb1, nb2));

    return 0;
}
