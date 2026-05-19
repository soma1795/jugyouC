#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	SetConsoleOutputCP(65001);

	//おみくじのプログラム
	//     数値
	//大吉  0
	//中吉  1
	//吉    2
	//凶    3

	unsigned seed = (unsigned int)time(NULL);
	srand(seed);
	
	//ランダムに数値を決定
	int result = rand() % 6;
	/*
	if (result == 0)
	{
		printf("大吉\n");
	}
	else if (result == 1)
	{
		printf("中吉\n");
	}
	else if (result == 2)
	{
		printf("吉\n");
	}
	else if (result == 3)
	{
		printf("凶\n");
	}
	*/

	switch (result)  //resultの中身が何なのかによる条件分岐の実行
	{
	case 0:  //セミコロンではなく、コロンを使う
		//resultが0の場合の処理を書く
		printf("大吉\n");
		break; //result = 0の時の処理終了
	case 1:
		printf("中吉\n");
		break;
	case 2:
		printf("吉\n");
		break;
	case 3:
		printf("凶\n");
		break;
		//ラベルが存在しない場合ここにジャンプする
	default:
		printf("粗品\n");
		break;

	}
	return 0;
}