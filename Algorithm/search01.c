#include<stdio.h>

main()
{
	int d[10] = { 10,5,30,77,16,3,74,29,37,33 };
	int i, s;

	printf("探索値sを入力:");
	scanf("%d", &s);

	//線形探索(リニアサーチ)
	for ( i=0;  i<10;  i++)
	{
		if (s == d[i])
		{
			break;
		}
	}

	if (i == 10)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("探索値%dを、d[%d]で発見！\n", s, i);
	}
}