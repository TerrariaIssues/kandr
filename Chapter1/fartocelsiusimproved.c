#include <stdio.h>

main()
{
	
	float celsius, fahr;
	int upper, lower, step;
	
	upper = 300;
	lower = 0;
	step = 20;

	fahr = lower;
	printf("Farenheit to Celsius Converter... Again.\n\n");

	while(fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

