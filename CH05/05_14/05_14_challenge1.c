#include <stdio.h>

void add(int a, int b)
{
	int sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);
}

void subtract(int a, int b)
{
	int difference = a - b;
	printf("%d - %d = %d\n", a, b, difference);
}

void multiply(int a, int b)
{
	int product = a * b;
	printf("%d * %d = %d\n", a, b, product);
}

float divide(int a, int b)
{
	float result = (float)a / b;
	return(result);
}

int main()
{
	int a,b;

	printf("Enter two values, separated by a space: ");
	scanf("%d",&a);
	scanf("%d",&b);

	add(a,b);
	subtract(a,b);
	multiply(a,b);
	printf("%d / %d = %f\n",a,b,divide(a,b));
	
	return 0;
}
