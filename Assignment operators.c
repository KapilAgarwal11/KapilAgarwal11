#include<stdio.h>

int main(void)
{

    int i = 10;

    char a = 'd';
    printf("ASCII value of %c is %d\n", a, a); // print ASCII value of d

    a += 10; // increment a by 10;
    printf("ASCII value of %c is %d\n", a, a); // print ASCII value of n

    a *= 5; // multiple a by 5;
    printf("a = %d\n", a); 

    a /= 4; // divide a by 4;
    printf("a = %d\n", a); 

    a %= 2; // remainder of a % 2;
    printf("a = %d\n", a); 

    a *= a + i;  // is equivalent to  a = a * (a + i)
    printf("a = %d\n", a);

    return 0; // return 0 to operating system
}
