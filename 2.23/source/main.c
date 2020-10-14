#include<stdio.h>
#include<stdlib.h>
int main(){
int x[3],y,z;
	printf("叫块3计\n");
	scanf_s("%d %d %d", &x[0], &x[1], &x[2]);
	y = x[0];
	z = x[0];
	for (int i = 0;i < 3;i++) {
		if (x[i] > y) 
			y = x[i];
		if (x[i] < z)
			z = x[i];
	}
	printf("%d 程程计\n", y);
	printf("%d 程程计\n", z);
	system("pause");
	return 0;
}