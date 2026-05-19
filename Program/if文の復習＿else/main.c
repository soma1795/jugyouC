#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	SetConsoleOutputCP(65001);

	unsigned int seed = (unsigned int)time(NULL);
	srand(seed);

	int attack = rand() % 80;
	int magic = rand() % 80;
	int bosshp = rand() % 101 + 20;  //ボスの体力は20から120
	//rand() % 101 ←0～100までのランダムな値を生成
	// +20         ←0～100を20～120にする

	//printf("PLAYER: %d vs %d :BOSS\n",attack,bosshp);
	printf("PLAYER:\n");
	printf("攻撃:%d\n", attack);
	printf("魔法:%d\n", magic);
	printf("\n");
	printf("BOSS HP%d\n", bosshp);
	printf("\n");


	//プレイヤーの攻撃でボスのHPを0以下にできればボスを倒せる
	//物理で倒せなかったとしても、魔力が高ければ倒せる
	//どちらも無理の場合、死が待っている

	//if - else if - else
	//は最初に条件を満たしたぷロックの処理1つしか実行されない
	if (attack >= bosshp)
	{
		printf("ボスを殴り倒した！\n");
	}
	else if(magic >= bosshp)
	{
		printf("ボスを焼き払った!\n");
	}
	else
	{
		//1/2の確率で逃げる
		//rand()を使って２つの数字を生成できればそれを使って判定できる
		//→　rand()a関数を使って0か1を生成
		//0なら逃走成功とする
		if((rand() % 2) == 0)
		{
			printf("逃走成功！\n");
		}
		else
		{
			printf("-----YOU DIED-----\n");
		}
	}

	return 0;
}