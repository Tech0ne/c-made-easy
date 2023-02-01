#include <stdio.h>

#define load_as(type, var, value) type var = value;

int main()
{
    load_as(int, out, 12);
    printf("Hey, here is your nb : %i\n", out);
}