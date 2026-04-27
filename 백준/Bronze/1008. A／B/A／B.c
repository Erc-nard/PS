#include <stdio.h>

int main(void)
{
	long double num1, num2;
	long double result;
	scanf("%Lf", &num1);
	scanf("%Lf", &num2);

	result=num1/num2; 
	printf("%.10Lf", result);
	return 0;
}