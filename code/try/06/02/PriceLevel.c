#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int PriceLevel = 0;

	puts("请输入奖励级别：");
	scanf_s("%d", &PriceLevel);
	if (PriceLevel == 1) 
	{
		puts("一等奖，奖品是“42寸彩电”");
	}
	if (PriceLevel == 2)
	{
		puts("二等奖，奖品是“光波炉”");
	}
	if (PriceLevel == 3)
	{
		puts("三等奖，奖品是“加湿器”");
	}
	if (PriceLevel == 4)
	{
		puts("安慰奖，奖品是“16G-U盘”");
	}
	return EXIT_SUCCESS;
}
