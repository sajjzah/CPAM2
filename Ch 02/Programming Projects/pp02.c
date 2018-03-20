// calculates the volume of a sphere with radius = 10

#include <stdio.h>

#define RADIUS 10
#define PI 3.1415f

int main(void)
{
	float volume;

	volume = (4.0f / 3.0f) * PI * RADIUS*RADIUS*RADIUS;

	printf("Volume of sphere = %.2f\n", volume);

	return 0;
}

// Note that fraction 4/3 is equal to 1 that definitely isn't the number we want.
