#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x = 0;
	printf("請輸入正整數\n");
	scanf_s("%d", x);
	if (x % 2 ==1)
		printf("%d是奇數", x);
	if (x % 2 == 2)
		printf("%d是偶數", x);








	system("pause");
	return 0;


}