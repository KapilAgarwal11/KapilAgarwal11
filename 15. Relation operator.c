#include<stdio.h>

int main()
{
    int x = 12, y = 13;

    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    // Is x is greater than y?
    printf("x > y : %d\n", x > y);

    // Is x is greater than or equal to y?
    printf("x >= y : %d\n", x >= y);

    // Is x is smaller than y?
    printf("x < y : %d\n", x < y);

    // Is x is smaller than or equal to y?
    printf("x <= y : %d\n", x <= y);

    // Is x is equal to y?
    printf("x == y : %d\n", x == y);

    // Is x is not equal to y?
    printf("x != y : %d\n", x != y);

    // Signal to operating system everything works fine
    return 0;
}
