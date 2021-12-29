#include <stdio.h>

main()
{
	int c, blankc = 0, tabc = 0, linec = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++blankc;
		if (c == '\t')
			++tabc;
		if (c == '\n')
			++linec;
	}
	printf("Blanks: %d Tabs: %d Lines: %d\n\n ", blankc, tabc, linec);
}

