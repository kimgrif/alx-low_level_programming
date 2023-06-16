#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - variable n will store a different value every time you will run this program 
* 
* Description: generates a random number and checks if the number is greater than : is positive, if the number is 0: is zero
*              if the number is less than 0: is negative
*
*             return value is 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n > 0){
        printf("The number is positive\n");
    } else if (n < 0) {
        printf("is negative\n");
    } else {
        printf("is zero\n");
    }
	return (0);
}