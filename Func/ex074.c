#include<stdio.h>
void display1(int n1);
void display2(int *n2);

main()
{
	int a, b;
	printf("���la?:");
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);

	printf("���lb?");
	scanf("%d", &a);  
	display2(&b);
	printf("b=%d\n\n", b);
}

/*�֐�display1�̋L�q*/
void display1(int n)
{
	printf("���la�́A%d�ł��B\n",n);
	n += 10;
	return;
}

/*�֐�display2�̋L�q*/
void display2(int *n)
{
	printf("���lb�́A%d�ł��B\n", *n);
	*n += 10;
	return;
}