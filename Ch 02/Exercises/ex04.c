#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	float num4, num5, num6;

	printf("First integer: %d\n", num1);
	printf("Second integer: %d\n", num2);
	printf("Third integer: %d\n", num3);
	printf("First Float: %d\n", num4);
	printf("Second Float: %d\n", num5);
	printf("Third Float: %d\n", num6);

	return 0;
}

// Dependent on many factors such as compiler, you may get different (and meaningless) outputs.
// I've got some meaningless numbers on GNU GCC but on better error checking compilers such as
// visual c++ you'll get an error as "uninitialized local variable used".
