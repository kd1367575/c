#include<stdio.h>
main()
{
	fload fno;
	printf("実数を入れて：")；
	scanf("%f", &fno);
	printf("二倍すると%f\n三倍すると%f\n", fno * 2, fno * 3);
}