#include<stdio.h>
void display(int a);

main()
{
	int a;
	printf("data?:");
	scanf("%d", & a);
	display(a);
}

/*関数定義*/
void display(int a)
{
	printf("入力データ=%d\n", a);
	return;
}