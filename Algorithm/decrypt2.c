#include<stdio.h>

main()
{
	char s[21];
	int i, no;

	printf("���������͂��Ă���������");
	scanf("%s", &s);

	i = 0;
	while (s[i] != '\0')
	{
		printf("s[%d]�̈Í����L�[��", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
		i++;
	}
	printf("������������́A%s\n", s);
}