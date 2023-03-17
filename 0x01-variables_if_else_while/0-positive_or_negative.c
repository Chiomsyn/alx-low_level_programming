#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - write a code that involes if-else statements
 *
 * Return: zero
 *
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0){
        printf("%d is positive\n", n);
	}else if(n == 0){
	    printf("%d is zero\n", n);
	}else{
	    printf("%d is negative", n);
	}
	return (0);
}
