#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int enemyhp = 8000;

	printf("君が！泣くまで！殴るのをやめない！\n");

	//構文
	// while(ループ条件)
	// {
	// 　　繰り返し処理;
	//}
	while (enemyhp > 0)
	{
		enemyhp -= 1;
		printf("残りHP : %d\n", enemyhp);
	}

	return 0;
}