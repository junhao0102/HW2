#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int x, y;
	printf("請輸入兩個數字");
	scanf_s("%d %d", &x, &y);
		if (x % y == 0)
			printf("%d是%d的倍數", x, y);
		else
			printf("%d不是%d的倍數", x, y);
	system("pause");
	return 0;



















}