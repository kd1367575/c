#include<stdio.h>
void shisoku(int x, int y, int *wa, int *sa,
	                          int *sk, int *syo);

main()
{
	int a, b, c, d, e, f;

	printf("���l?:");
	scanf("%d", &a);
	printf("���l?:");
	scanf("%d", &b);

	//�֐��Ăяo��(�֐��R�[��)
	shisoku(a, b, &c, &d, &e, &f);

	puts("���l�Ɛ��l�̎l�����Z");  //������\��
	printf("wa=%d sa=%d saki=%d syou=%d\n", c, d, e, f);
}

//�֐���`
void shisoku(int x, int y, int* wa, int* sa,
	                              int* sk, int* syo)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	return;
}
