#include<stdio.h>

main()
{
	int i,s,d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	for (i = 0; i < 10; i++);
	{
		printf("%02d", d[i]);
	}

	printf("�T���l����͂��Ă�������\n");
	scanf("%d", &s);
	i = 0;
	while (s != d[i])
	{
		i++;
	}
	if (i >= 10)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		 printf("�z��%d�ԖڂɌ�������\n", i);
	}
}