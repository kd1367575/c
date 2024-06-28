#include<stdio.h>

main()
{
	char s[21];
	int i, no;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s);

	i = 0;
	while (s[i] != '\0')
	{
		printf("s[%d]‚ÌˆÃ†‰»ƒL[„", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
		i++;
	}
	printf("•œ†‰»•¶š—ñ‚ÍA%s\n", s);
}