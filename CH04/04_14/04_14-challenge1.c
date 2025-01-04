#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
	// variable declarations
	int done;
	char in;
			
	/* main program loop */
	done = FALSE;
	while(!done)
	{
		// prompt for input
		// process input
		printf("Make a move:");
		in = getchar();
		switch (in)
		{
			case 'R':
				puts("move right");
				break;
			case 'L':
				puts("move left");
				break;
			case 'B':
				puts("move back");
				break;
			case 'H':
			case '?':
				puts("Input R, L, B, or Q to quit");
				break;
			case 'Q':
				done = TRUE;
				break;
			default:
				puts("Invalid input");
		}
		// if R is input, output "move right"
		// if L is input, output "move left"
		// if B is input, output "move back"
		// if Q is input, break the loop
		// if H or ? is input, output valid commands
		// identify invalid input
		// Need to clear the buffer as the 
		while((in=getchar()) != '\n')
			;
	}

	return 0;
}
