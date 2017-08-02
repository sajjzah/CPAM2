/*
// 1
Dependent on compiler, you may get a warning message or not. that's because
main function has int return type but return statement is missing.
*/

/*
// 2
Directives:
	#include <stdio.h>
Statements:
	printf("Parkinson's Law:\nWork expands as to ");
	printf("fill the time\n");
	printf("available for its completion.\n");
	return 0;
Output:
	Parkinson's Law:
	Work expands as to fill the time
	available for its completion.
*/

// 3
#include <stdio.h>

int main(void)
{
	int height = 8, length = 12, width = 10, volume;

	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}

// 4
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

/*
// 5
(a) is not legal because identifiers can't begin with digits.
*/

/*
// 6
It could be hard to tell how many underscores is used.
*/

/*
// 7
(a) and (e) are keywords.
an easy way to determine if a word is keyword or not is to declare a variable
with that name. if you haven't got any compile-time error, then it's not a keyword.
*/

/*
// 8
There are 14 tokens: a, =, (, 3, *, q, -, p, *, p, ), /, 3 and ;.
*/

/*
// 9
answer = (3 * q - p * p) / 3;
*/

/*
// 10
- The new line after #include <stdio.h> is essential because directives are known as
an one line command and everything in this line will be known as directive.
(that's why we don't put ; at the end of directives: they don't need that!)

- The spaces between data type (int) and identifires (main, height) are esential because
otherwise they'll got mixed together and produce new (and probably meaningless) token.

- The space between "return 0". the reason is same as the above.
*/
