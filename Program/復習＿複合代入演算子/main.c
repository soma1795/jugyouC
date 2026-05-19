#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int hp = 100;

	//15ダメージを受けた！
	hp = hp - 15;
	printf("15ダメージを受けた！\n");
	printf("残りHP:　%d\n",hp);


	return 0;
}