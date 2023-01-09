#include <stdio.h>

int main()
{
	int length, height, perimeter, area;

	printf("Enter the Length: ");
	scanf("%d",&length);
	printf("Enter the height: ");
	scanf("%d",&height);

	perimeter = 2 * (length + height);
	area = length * height;

	printf("The periemeter is: %d\n",perimeter);
	printf("The area is: %d\n", area);

	return (0);
}
