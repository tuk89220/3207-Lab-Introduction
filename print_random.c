#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"


int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++){
        int randNum = rand() % (25 + 0 - 1) + 0;        	
	putchar( randchar(randNum) );
	putchar('\n');
        }
	return(0);
}

