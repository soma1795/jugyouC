#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int enemyhp = 400;

	printf("5回攻撃！\n");
	//n回処理を繰り返したい場合、
	//for(int i = 1; i <= n; i++)
	//のような書き方は非推奨
	for (int i = 0;i < 5; i++) //この書き方を覚えておこう！
	{
		enemyhp -= 20;
		printf("20ダメージ！残りHP　%d\n", enemyhp);
	}

	return 0;
}