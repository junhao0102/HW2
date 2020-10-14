#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float x,z;
	int y;
	printf("請輸入身高(公尺)\n");
	scanf_s("%f", &x);
	printf("請輸入體重(公斤)\n");
	scanf_s("%d", &y);
	z = y / (x*x);
	printf("你的BMI是%f\n", z);
	if (z < 18.5)
		printf("underweight\n");
	if (z > 18.5 && z<24.9)
		printf("normal\n");
	if (z < 29.9 && z>25)
		printf("overweight\n");
	if (z >=30)
		printf("obese\n");







	system("pause");
    return 0 ;

	}