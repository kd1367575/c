#include<stdio.h>

main()
{
	int i,s,d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	for (i = 0; i < 10; i++);
	{
		printf("%02d", d[i]);
	}

	printf("探索値を入力してください\n");
	scanf("%d", &s);
	i = 0;
	while (s != d[i])
	{
		i++;
	}
	if (i >= 10)
	{
		printf("見つからなかった\n");
	}
	else
	{
		 printf("配列%d番目に見つかった\n", i);
	}
}