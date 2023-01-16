#include <stdio.h>
int main()
{
	float num1, num2, num3, sum, div, sub, mult, mod;
	float *ptr1, *ptr2, *ptr3;

	printf("Enter any three numbers: ");
	scanf("%f%f%f",&num1, &num2, &num3);

	ptr1 = &num1;
	ptr2 = &num2;
	ptr3 = &num3;

	sum = (*ptr1) + (*ptr3) + (*ptr2);
	div = (*ptr1) / (*ptr2);
	mult = (*ptr1) * (*ptr2) * (*ptr3);
	sub = (*ptr3) - (*ptr1);
	mod = (*ptr2) * (*ptr1);
	

	printf("The sum of the intergers are %.2f \n",sum);
	printf("The division should give us: %.3f\n", div);
	printf("The multiplication of the given is: %.2f\n",mult);
	printf("The subtraction follows the following: %.2f\n",sub);


	return (0);
}
