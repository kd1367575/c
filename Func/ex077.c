#include<stdio.h>
void maxmin(int a, int b, int c, int* p_max, float* p_min);

main()
{
	int a, b, c, max, min;

	printf("整数を３つ入力:");
	scanf("%d%d%d", &a, &b, &c);

	maxmin(a, b, c, &max, &min);

	printf("最大値=%d  最小値=%d\n", max, min);
}

//関数定義
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