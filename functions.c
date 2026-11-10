#include "functions.h"

int add(int nb1, int nb2)
{
    return nb1 + nb2;
}

int sub(int nb1, int nb2)
{
    return nb1 - nb2;
}

int mul(int nb1, int nb2)
{
    return nb1 * nb2;
}

int divi(int nb1, int nb2)
{
    if (nb2 == 0)
        return 0;
    return nb1 / nb2;
}
