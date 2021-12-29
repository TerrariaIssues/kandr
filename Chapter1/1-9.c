#include <stdio.h>
/* a true beginners question, how to make more with less. redundant question with further knowledge.*/
main()
{
	int c, lastc;

	while((c = getchar()) != EOF)
	{
		if(c != ' ')
			putchar(c);
		if(c == ' ')
			if(lastc != ' ')
				putchar(c);
				
		lastc = c;
	}
}
