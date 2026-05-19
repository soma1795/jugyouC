#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int attack = 150;
	int hp = 128;

	if (attack >= 100)
	{
		printf("ボスを倒した！\n");
	}
	else
	{
		// HPが100以上なら逃げる
		//そうじゃないなら死

		//if文の後にブロックの中にif文を書くこともできる
		if (hp >= 100)
		{
			printf("逃げ切った…\n");
		}
		else
		{
			printf("　　死　　\n");
		}
	}

	return 0;
}