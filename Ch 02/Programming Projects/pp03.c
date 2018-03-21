// calculates the volume of a sphere with entered radius

#include <stdio.h>

#define PI 3.1415f

int main(void)
{
	float radius, volume;

	printf("Enter the radius: ");
	scanf("%f", &radius);

	volume = (4.0f / 3.0f) * PI * radius*radius*radius;

	printf("Volume of sphere = %.2f\n", volume);

	return 0;
}
