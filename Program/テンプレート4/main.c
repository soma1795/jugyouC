#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	//変数の宣言をすると同時に値を代入できる
	int maxHp = 128 + 32;    //最大HP
	int nowHp = maxHp;  //今のHP

	int attack = 0;    //のちに代入するけど念のため０で初期化しておく

	//maxHp = 128;
	//nowHp = maxHp;
	//nowHp = 60;  //今のHPを最大HPに

	printf("HP %d / %d\n", nowHp, maxHp);

	return 0;
}