#include<stdio.h>

main()
{
	int i;
	char s[50];

	printf("�Í������������͂��Ă���������");
	scanf("%s",&s[0]);

	i = 0;
	while (s[i] != '\0')
	{
		s[i]--;
		i++;
	}
	printf("�����ςݕ�����́A%s\n,",&s[0]);
}