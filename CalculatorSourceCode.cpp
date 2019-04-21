#include <stdio.h>
#include <stdlib.h> 
#include <math.h> /* Calculator. */

		void squarEroot(void);
	void calculator(void);
int main(void)
{
	/* Select. */ int number, code = 1; // Sets.
Menu:

	printf("If you will Square Root, please enter num-one.\n");
	printf("If you will Calculating the Surface square of a Cylinder, please enter num-two.\n \n");
		scanf("%d", &number);
	printf("\n");

	if (number == code)
	{
		goto SquarEroot;
	}
	else
	{
		goto Calculator;
	}
SquarEroot:
	squarEroot();
		goto Menu;

Calculator:
	calculator();
		goto Menu;

	/* Exit. */

	system("pause>nul");
		goto Menu;
			return 0;
}		
void squarEroot(void)
{
	/* Data. */

	double data, answer; // Sets.

	printf("Sqrt = ");
		scanf("%lf", &data);
	printf(" \n");

	answer = sqrt(data); // Formula.

	/* Output. */

	printf("Square Root = %lf .\n \n", answer);
		system("pause>nul");
}
void calculator(void)
{
	/* Sets. */

	double h, r, c; // Height, Radius and Circumference.
	double sd, sc, sb; // The answer about square.
	double pi = 3.14; // Ratio of the circumference of a circle to its diameter.

	/* Datas. */

	printf("Height = ");
		scanf("%lf", &h);
	printf(" \n");

	printf("Radius = ");
		scanf("%lf", &r);
	printf(" \n");

	/* Formula. */

	c = 2 * r * pi;
	sc = c * h;
	sd = r * r * pi;
	sb = sd * 2 + sc;

	/* Output.*/

	printf("Output = %lf .\n \n", sb);
		system("pause>nul");
}