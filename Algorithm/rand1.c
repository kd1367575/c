#include <stdio.h>
#include <stdlib.h>   //乱数を使うときに必要です 
#include <time.h>     //乱数を使うときに必要です

main()
{
	int kazu;

	srand(time(0));  //乱数を初期化(シャッフル)する
	kazu = rand();   //0〜32767 の範囲で乱数を求める
	printf("発生した乱数は%dです\n", kazu);
}