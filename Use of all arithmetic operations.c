#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    mod = num1 % num2;
    div = (float)num1 / num2;


    printf("Sum of num1 and num2 = %d \n", sum);
    printf("Difference of num1 and num2 = %d \n", sub);
    printf("Product of num1 and num2 = %d \n", mult);
    printf("Modulus of num1 and num2 = %d \n", mod);
    printf("Quotient of num1 and num2 = %f ", div);


    return 0;
}
