#include <stdio.h>
/**
 *how to use scanf and printf function to perfom input and output on primitive types i C
 *main - Entry point
 *Return: nothing
 */
int main ()
{
	char charval;
	unsigned char ucharval;

	short shortval;
	unsigned short ushortval;

	int intval;
	unsigned int uintval;

	long longval;
	unsigned long ulongval;

	long long longlongval;
	unsigned long long ulonglongval;

	float floatval;
	double doubleval;
	long double longdoubleval;

	printf("enter a character: ");
	charval = getchar();
	getchar(); /*dummy getchar to capture enter*/

	printf("Enter another character: ");
	ucharval = getchar();
	getchar();

	printf("Enter a signed short value: \n\t");
	scanf("%hi",&shortval);

	printf("Enter an ussigned character:\n\t ");
	scanf("%hu", &ushortval);

	printf("Enter an interger: ");
	scanf("%d", &intval);

	printf("Enter the usigned int value: ");
	scanf("%u", &uintval);

	printf("Enter a long: ");
	scanf("%ld", &longval);

	printf("Enter an usigned long: ");
	scanf("%lu", &ulongval);

	printf("Enter a long long value: ");
	scanf("%lld", &longlongval);

	printf("Enter a float value: ");
	scanf("%f", &floatval);

	printf("Ente a double: ");
	scanf("%lf", &doubleval);

	printf("Enter a longdouble val: ");
	scanf("%LF", &longdoubleval);

	printf("You entered %c as your character: \n", charval);
	printf("You entered %c as your unsighned character: \n\n", ucharval);
	printf("short value: %hi \n", shortval);
	printf("Unsigned short value: %hu \n\n", ushortval);
	printf("the entered interger is: %d \n", intval);
	printf("The unsigned interger is : %u \n\n",uintval);
	printf("The entered long is: %ld \n", longval);
	printf("The entered unsigned long is: %lu \n", ulongval);
	printf("The float value is: %f \n",floatval);
	printf("The double variable is: %F", doubleval);
	printf("the value is: %LF", longdoubleval);

	return (0);
}


