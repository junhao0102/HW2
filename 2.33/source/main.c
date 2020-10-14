#include<stdio.h>
#include<stdlib.h>
int main(void){
	int x,a,b;
	float y,z,c;

	printf("輸入一整天的總里程數\n");
	scanf_s("%d", &x);
	printf("汽油一公升/加侖多少錢\n");
	scanf_s("%f", &y);
	printf("平均一公升/加侖能行駛多少公里\n");
	scanf_s("%f", &z);
	printf("一天的停車費\n");
	scanf_s("%d", &a);
	printf("一天的通行費(過路費)\n");
	scanf_s("%d", &b);
	c = x / z * y + a + b;
	printf("你的總金額是%f", c);






	system("pause");
	return 0;

	}