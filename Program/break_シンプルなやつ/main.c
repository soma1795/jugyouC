#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int enemyhp = 150;

	//10回連続攻撃
	for (int i = 0;i < 10;i++)
	{
		enemyhp -= 15;
		printf("HP:%d\n",enemyhp);
		if (enemyhp <= 0)
		{
			printf("敵を倒した！\n");
			break;
		}
	}

	return 0;
}