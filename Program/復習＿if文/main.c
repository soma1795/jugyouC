#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	SetConsoleOutputCP(65001);

	//ゲームの開始時間を取得する
	unsigned int seed = 0;  //シード値　ランダムに発生させるための値
	//現在時刻を変数seedに代入
	seed = (unsigned int)time(NULL);
	//seed値をもとにランダムな値を生成してもらう
	//起動時間は変わるので、毎回異なる値がでる
	srand(seed);

	//================
	//rand()を使うときは最初に
	//unsigned int seed = (unsigned int)time(NULL);
	//srand(seed);
	//と書く
	//================

	//６面ダイス　１から６のいずれかが出る
	int dicedeme = rand();
	dicedeme %= 6;
	dicedeme += 1;

    printf("さいころの出目は%dでした\n", dicedeme);

	dicedeme = rand() % 6 + 1;
	printf("さいころの出目は%dでした\n", dicedeme);

	dicedeme = rand() % 6 + 1;
	printf("さいころの出目は%dでした\n", dicedeme);

	dicedeme = rand() % 6 + 1;
	printf("さいころの出目は%dでした\n", dicedeme);
	dicedeme = rand() % 6 + 1;
	printf("さいころの出目は%dでした\n", dicedeme);
	dicedeme = rand() % 6 + 1;
	printf("さいころの出目は%dでした\n", dicedeme);
	dicedeme = rand() % 6 + 1;
	printf("さいころの出目は%dでした\n", dicedeme);

	return 0;
}