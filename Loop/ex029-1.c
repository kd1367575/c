#include<stdio.h>

main()
{
	int su;

	//suを入力
	printf("数を入れて:");
	scanf("%d", &su);

	while (su>0)
	{
		printf("*");
		su--; //デクリメント
	}
}