#include <stdio.h>

int main()
{
	
	int a,b;
	
	//Input values
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);	
	
	//Numbers before swapping
	printf("Before swapping... a: %d, b: %d\n",a,b);
	
	//swapping numbers
	a = a+b;	//step 1
	b = a-b;	//step 2
	a = a-b; 	//step 3
	
	//Numbers after swapping 
	printf("After swapping...  a: %d, b: %d\n",a,b);

	return 0;
}
