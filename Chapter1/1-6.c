#include <stdio.h>
/*Reads chars from standard input and prints them out to the command line when the input does not 
 * equal the end of file character
 * getchar() != EOF is true so long as the user is giving input, once the end of file is inputted,
 * the while statement becomes false, so the final printf line is finally inputted.
 */
main()
{
	int c;
	while (c = getchar() != EOF)
		printf("%d\n", c);
	printf("%d - at EOF\n", c);
}

