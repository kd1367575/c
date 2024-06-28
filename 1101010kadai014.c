#include<stdio.h>
main()
{
	int yy, mm, dd;

	//生年月日を入力
	printf("西暦を入力してください:");
	scanf("%d", &yy);
	peintf("月を入力してください:");
	scanf("%d", &mm);
	printf("日を入力してください:");
	scanf("%d", &dd);

	//生年月日を表示
	printf("私は、%d年%d月%d日に生まれました。\n", yy, mm, dd);
}