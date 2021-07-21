#include<stdio.h>
int swap(int *a, int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}

void main() 
{  
 int a=100, b=200;  
 clrscr();  
 swap(&a, &b);  // passing value to function
 printf("\nValue of a: %d",a);
 printf("\nValue of b: %d",b);
 return 0;
}
