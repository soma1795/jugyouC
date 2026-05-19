#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	SetConsoleOutputCP(65001);

	unsigned seed = (unsigned int)time(NULL);
	srand(seed);

	int enemyhp = 100;
	int playermp =9;

	//敵に対し連続魔法を放つ
	//一回のダメージ量は10でmpは2減る

	//敵を倒す、あるいはmp0で攻撃終了

	//敵を倒すと終わり →　つまり enemyhp > 0
	//mpが0で攻撃終了　→　つまり playermp> 0

	//繰り返し条件を両方満たす必要あり
	//while (enemyhp > 0 && playermp >= 2)
	while (enemyhp > 0)
	{
		//消費mpをらんだむにする
		// 消費以上のmpがないと中断

		//ここで消費mpを決定して足りなければ終了できたらいいよね
		//ループ処理を強制終了するのがbreak文

		//消費をランダムに決定し、mpが足りなければ攻撃終了
		int usemp = rand() % 5;
		if (playermp < usemp)  //mpが足りなければ
		{
			printf("mpが足りない！\n");
			break;   //ループを強制終了
		}

		//敵に対して魔法攻撃を行う
		enemyhp -= 10;
		playermp -= usemp;

		printf("魔法攻撃を行った！10ダメージ！\n");
		printf("敵のhp:%d\n",enemyhp);
		printf("残りmp:%d\n",playermp);


	}

	return 0;
}