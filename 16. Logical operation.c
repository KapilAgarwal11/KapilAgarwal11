#include<stdio.h>

int main()
{
    int a = 12, result;

    printf("Initial value of a = %d\n", a);

    // result of the logical expression is stored in result
    result = (a==11) && (a++); 

    printf("Final value of a = %d\n", a);
    printf("Result of logical expression = %d\n", result);

    // Signal to operating system everything works fine
    return 0;
}
