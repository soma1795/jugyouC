#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	//変数の宣言
	int playerHp;

	//変数への値の代入
	playerHp = 100;
	//printfを用いて変数の中身を表示
	printf("HP:%d\n", playerHp);

	//代入を複数回すると、その値は上書きされる
	playerHp = 300;
	printf("HP:%d\n", playerHp);

	//新しく変数testを作成
	int test;

	//変数にほかの変数を代入
	//右辺の変数の中身が左辺の変数に代入される
	test = playerHp;

	printf("TEST:%d\n", test);

	//int型の変数に小数点以下を含む数値を代入したら？
	test = 100.5;
	printf("TEST:%d\n", test);

	//int型は変数を入れるための変数
	//整数を入れるための変数に小数点以下の数値を代入されると、
	//少数点以下は切り捨てられる！
	return 0;
}