//swaping using temp variable
#include<stdio.h>
int main() {
  int first, second, temp;
  printf("Enter first number: ");
  scanf("%d", &first);
  printf("Enter second number: ");
  scanf("%d", &second);
    printf(" This code is  designed by Agarwal kapil \n");
  // Value of first is assigned to temp
  temp = first;

  // Value of second is assigned to first
  first = second;

  // Value of temp (initial value of first) is assigned to second
  second = temp;
    printf("After swaping,first number: %d\n",first);
    printf("After swaping,second number: %d\n",second);
    return 0;
 }
    
