#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int num = 100;

	//if(条件式)
	//{
	//条件が合っていたら実行されるプログラム
	//}

	// ==左右の辺の値が同じ場合、条件を満たす
	if (num == 100)
	{
		printf("numは100です\n");
	}
	if (num == 950)
	{
		printf("numは950です\n");
	}

	// ＞ 左の値のほうが大きい場合条件を満たす
	if (num > 80)
	{
		printf("numは80より大きい\n");
	}
	if (num > 100)
	{
		printf("numは100より大きい\n");  //同じ場合も条件を満たさない
	}

	//>=　左辺のほうが右以上に大きいとき、条件を満たす
	if (num >= 80)
	{
		printf("numは80以上\n");
	}
	if (num >= 100)
	{
		printf("numは100以上\n");  //同じ場合も満たす
	}

	//<=　左辺のほうが右辺以下の場合、条件達成
	if (num <= 80)
	{
		printf("numは80以下\n");
	}
	if (num <= 100)
	{
		printf("numは100以下\n");
	}

	// != 右も左も異なる場合、条件を達成する
	if (num != 80)
	{
		printf("numは80ではない\n");
	}
	if (num != 100)
	{
		printf("numは100ではない\n");  //異なる場合条件を満たす
	}

	return 0;
}