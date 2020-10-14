#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	for (int i = 0; i < 9;i = i+2) {
		for (int k = 9;k >= i;k = k - 2)
			printf(" ");
		for (int j = 0;j <= i;j++) 
			printf("*");
			printf("\n");
		
			
		}
	system("pause");
	return 0;
}