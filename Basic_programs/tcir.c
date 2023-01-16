#include <stdio.h>
/**
 *This program asks the user to input radius of a circle and gets the circumffence and area"
 */
int main()
{
	float radius, area, circumfrence;

	printf("Enter the radius of the circle: ");
	scanf("%f",&radius);

	area = 2 * 3.142 * radius;
	circumfrence = 3.142 *  radius * radius;

	printf("The area of your circle is: %.3f\n", area);
	printf("The circumference of the circle is: %.3f\n", circumfrence);

	return (0);
}
