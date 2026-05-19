#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	//1から10までの数値を足し、その答えを入力するプログラム
	int num = 10;   // 2以上の正の値のみ
	int answer; //足し算の答え

	for (answer = 1; answer <= 10; answer++)
	{
		if (answer <= 10)continue;
	}
	num += answer
		printf("合計は%dです\n",answer);
	return 0;
}