#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
/* main- c variables and if*/
/* betty style doc for function main goes there*/
int main(void)
	/*main-c variables*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/

	if	(n > 0)
		printf("the	number	is	positive");
	if	(n < 0)
		printf("the	number	is	negative");

	if	(n == 0)
		printf("the	number	is	0");

	return (0);
}
