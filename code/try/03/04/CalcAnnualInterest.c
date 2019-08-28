#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float AnnualInterestRate;
	float AnnualInterest;
	int SavingAmount;

	AnnualInterestRate = 2.95f / 100;
	SavingAmount = 10000;
	AnnualInterest = SavingAmount * AnnualInterestRate;
	

	printf("Annual Interest is: %.2f\n", AnnualInterest);

	return EXIT_SUCCESS;
}

