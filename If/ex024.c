#include<stdio.h>
main()
{
	char ch;

	printf("���������:");
	scanf("%c", &ch);

		if (ch >= 'A' && ch <= 'z') {
			printf("�啶���ł�\n");
	}
		else{
			printf("���̑��̕����ł�\n");
		}
}