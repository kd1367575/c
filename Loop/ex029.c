#include<stdio.h>

main()
{
	int su, cnt;

	//suを入力
	printf("数を入れて:");
	scanf("%d", &su);

	cnt = 0;
	while (cnt < su )
	{
		printf("*");
		cnt += 1;　//カウントアップ

	}
}

