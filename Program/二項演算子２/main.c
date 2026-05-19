#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int hp = 10000;

	//ダメージを受けたのでHPを10減らす
	hp = hp - 10000;  //hpから10をひいた値をhpに代入する
	printf("HP:%d\n", hp);
	printf("残りHP: %d\n", hp);

	//魔力
	int magic = 20000;

	//魔力の分HPを回復させたい
	hp = hp + magic;

	printf("残りHP: %d\n", hp);

	//変数自身の値を増やしたり減らしたりしたいということはよくある
	//その場合、複合代入演算子を使用

	//ダメージを受けたのでHP20減らす
	//hp = hp - 20
	hp -= 20000;   //-=が演算子 -と=のあいだにスペースは入れてはならない
	            //hpから20引いた値をhpに代入
	            //→hpの中身を20減らす
	printf("20000ダメージを受けた！\n");
	printf("残りHP: %d\n", hp);

	//バフ効果で魔力を倍にする
	//magic = magic * 2;  //複合代入演算子を使わない場合
	magic *= 2; //*=が演算子
	            //magicの中身を倍にする
	printf("魔力バフ！魔力が%dになった！\n", magic);

	//魔力バフをかけた状態で回復
	hp += magic; //右辺を変数にすることも可能
	             //hpをmagic分増やす
	printf("HPを%d回復！\n",magic);
	printf("残りHP: %d\n", hp);

	return 0;
}