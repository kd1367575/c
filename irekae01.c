#include<stdio.h>

main()
{
	int a, b, w;

	a = 5;
	b = 3;

	printf("����ւ��O:a=%d�Ab=%d\n", a, b);

	//��Ɨp�̕ϐ����g�p���ē���ւ�
	w = a;
	a = b;
	b = w;

	printf("����ւ���:a=%d�Ab=%d\n", a, b);
}