#include <stdio.h>

int main(void)
{
	int a, b, c;
	float d, e, f;

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);

	printf("d: %f\n", d);
	printf("e: %f\n", e);
	printf("f: %f\n", f);

	return 0;
}

/*
Dependent on many factors such as compiler, you may get different (and meaningless) outputs.
on better error checking compilers such as visual c++ you'll get an error as
"uninitialized local variable used".
*/
