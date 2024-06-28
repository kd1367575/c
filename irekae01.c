#include<stdio.h>

main()
{
	int a, b, w;

	a = 5;
	b = 3;

	printf("入れ替え前:a=%d、b=%d\n", a, b);

	//作業用の変数を使用して入れ替え
	w = a;
	a = b;
	b = w;

	printf("入れ替え後:a=%d、b=%d\n", a, b);
}