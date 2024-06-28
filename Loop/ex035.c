#include<stdio.h>

main()
{
	int num, sum;

	sum = 0;
	
	//無限ループ
	while (1)
	{
		printf("数をいえて:");
		scanf("%d", &num);

		//breakを呼び出す
		if (num == -999)
		{
			break;
		}

		//加算
		sum += num;
	}
	printf("合計=%d\n", sum);
}