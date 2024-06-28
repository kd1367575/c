#include<stdio.h>
void calculate(int a,int b,int *p_sum,float *p_ave);

main()
{
	int a, b, sum; 
	float ave;

	//入力
	printf("数値を２つ入力:");
	scanf("%d%d", &a % b); 

	//関数呼び出し
	calculate(a, b, &sum, &ave);

	//結果表示
	printf("合計は%d、平均は%.2f\n", & sum, &ave);
}

//関数定義
void calculate(int a, int b, int * p_sum, float * p_ave);
{
	*p_sum = a + b;
	*p_ave = (a + b) / 2.0;
	return;
}