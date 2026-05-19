#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int num = 123;

	//numが3の倍数なら"3の倍数！"と表示するプログラム
	//条件分の所のみ書き換えればOK
	//ほかの部分は書き換えOK
	if (num = 3 * num)
	{
		printf("3の倍数！\n");
	}

	return 0;
}