#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int num =1234567;
	int remainder = num % 7;

	// numが7の倍数の時、"XXは7の倍数！\n"と表示させる(XXはnumの値)
	if (remainder == 0)
	{
		//合っているとき、これが実行される
		printf("%dは7の倍数！\n\n",num);
	}
	else
	{
		//満たさなかった場合、else以降のものが実行される
		printf("%dは7の倍数ではない！\n\n",num);

		//
		int attack = 85;

		//攻撃力100以上ならボスを倒せる(ボスを倒した！\nと表示)
		// 攻撃力100未満だけど80以上あれば逃げる(逃げ切った…\nと表示）
		//満たさなかった場合死亡(死亡した…\nと表示)

		if (attack >= 100)
		{
			printf("ボスを倒した！\n");
		}
		else if (attack >= 80)
		{
			printf("逃げ切った…?\n");
		}
		else
		{
			printf("死亡した…\n");
		}
	}

	return 0;
}