#include<stdio.h>
void maxmin(int a, int b, int c, int* p_max, float* p_min);

main()
{
	int a, b, c, max, min;

	printf("�������R����:");
	scanf("%d%d%d", &a, &b, &c);

	maxmin(a, b, c, &max, &min);

	printf("�ő�l=%d  �ŏ��l=%d\n", max, min);
}

//�֐���`
void maxmin(int a, int b, int c, int* p_max, float* p_min);
{
	//
	//
	*p_max = a;

	//
	if (b > *p_max)
	{
		*p_min = b;
	}

}