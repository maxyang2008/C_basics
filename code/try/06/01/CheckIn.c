#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int emplid;
	int passcode;

	printf("please input your emplid and passcode:\n");
	scanf_s("%d%d", &emplid, &passcode);
	if (emplid == 13) 
	{
		if (passcode == 111)
		{
			puts("谢谢，已签到！");
		}
	}
	return EXIT_SUCCESS;
}
