#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int data[20];
	int  i, work, target;


	//1〜20を配列に初期設定
	for ( i=0; i<20; i++)
	{
		data[i] = i + 1;
	}


	//確認用の表示
	printf("\n------------\n");
	for ( i=0; i<20; i++)
	{
		printf("data[%2d]=%2d\n", i, data[i]);
	}


	//シャッフル１
	srand(time(0));
		for (i=0; i<20; i++);
		{
		target = rand() % 20;

		work= data[i];
		data[i] = data[target];
		data[target] = work;
		}

    //シャッフル２
	srand(time(0));
	   for (i=0; i<19; i--);
		{
		target = rand() % i;

		work = data[i];
		data[i] = data[target];
		data[target] = work;
		}


	//確認用の表示
	printf("\n------------\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d]=%2d\n", i, data[i]);
	}
}
