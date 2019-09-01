#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float weight, hight, BMI = 0;

	puts("请输入体重(kg)和身高(m)：");
	scanf_s("%f%f", &weight, &hight);
	
	BMI = weight / (hight * hight);

	if (BMI <= 18.5)
	{
		puts("偏轻");
	}
	else if (BMI <= 25)
	{
		puts("正常");
	}
	else if (BMI <= 30 )
	{
		puts("偏重");
	}
	else
	{
		puts("肥胖");
	}
	return EXIT_SUCCESS;
}
