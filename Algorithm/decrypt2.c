#include<stdio.h>

main()
{
	char s[21];
	int i, no;

	printf("文字列を入力してください＞");
	scanf("%s", &s);

	i = 0;
	while (s[i] != '\0')
	{
		printf("s[%d]の暗号化キー＞", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
		i++;
	}
	printf("復号化文字列は、%s\n", s);
}