#include <stdio.h>

main()
{
	float celsius = 0, fahr;
	int upper = 300, lower = 0, step = 20;
	
	while (celsius <= upper)
	{
		fahr = (celsius * 1.8) + 32;
		printf("%4.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

