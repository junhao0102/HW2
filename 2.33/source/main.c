#include<stdio.h>
#include<stdlib.h>
int main(void){
	int x,a,b;
	float y,z,c;

	printf("��J�@��Ѫ��`���{��\n");
	scanf_s("%d", &x);
	printf("�T�o�@����/�[�ڦh�ֿ�\n");
	scanf_s("%f", &y);
	printf("�����@����/�[�گ��p�h�֤���\n");
	scanf_s("%f", &z);
	printf("�@�Ѫ������O\n");
	scanf_s("%d", &a);
	printf("�@�Ѫ��q��O(�L���O)\n");
	scanf_s("%d", &b);
	c = x / z * y + a + b;
	printf("�A���`���B�O%f", c);






	system("pause");
	return 0;

	}