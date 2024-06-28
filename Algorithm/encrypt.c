#include<stdio.h>

main()
{
	int i;
	char s[50];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", s);
	i = 0;

	while (s[i] != '\0')
	{
		s[i] != s[i] + 1;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í%s\n", s);
}