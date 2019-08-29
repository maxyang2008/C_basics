#include <stdio.h>
#include <stdlib.h>


void click(void)
{
	static int sum = 0; // show effect of static modifier
	sum = sum + 1;
	printf("total click number is : %d\n", sum);
}


int main(void)
{
	click();
	click();
	click();
	click();
	return EXIT_SUCCESS;
}

