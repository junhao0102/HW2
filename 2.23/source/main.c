#include<stdio.h>
#include<stdlib.h>
int main(){
int x[3],y,z;
	printf("�п�J3�ӼƦr\n");
	scanf_s("%d %d %d", &x[0], &x[1], &x[2]);
	y = x[0];
	z = x[0];
	for (int i = 0;i < 3;i++) {
		if (x[i] > y) 
			y = x[i];
		if (x[i] < z)
			z = x[i];
	}
	printf("%d �̬��̤j��\n", y);
	printf("%d �̬��̤p��\n", z);
	system("pause");
	return 0;
}