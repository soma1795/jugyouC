#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);
	//変数の宣言と四則演算↓
	/*
	printf("\nこ\n\n ん\n\n  に\n\n   ち\n\n    は\n\n");

	//変数に数値を保存する	
	//変数：数値を記憶するための領域
	//変数を使うには宣言をする必要がある
	//データ型　変数名；(intやfloatなど)
	//変数名→自分でわかりやすい名前をつける
	int hp;

	//変数に数値を代入する
	//　=演算子を使って変数に値を入れる
	hp = 100;

	//printfを使って変数の中身を表示する
	printf("000:HP = %d\n", hp);

	//四則演算
	hp = 100 + 8;  //足し算+
	printf("001:HP = %d\n", hp);

	hp = 100 - 8;  //引き算-
	printf("002:HP = %d\n", hp);

	hp = 100 * 2;  //掛け算*
	printf("003:HP = %d\n", hp);

	hp = 500 / 10; //割り算/（このままだと割り算の余りはどこかへ行く）
	printf("004:HP = %d\n", hp);

	//余を計算するための演算子％
	hp = 125 % 19;
	printf("005:HP = %d\n", hp);

	*/

	//変数の型↓
	/*
	//int型　　整数を入れるための変数は以下の通り。
	int intValue = 90000;
	//printfで整数を表示したい場合、%dを使用する
	printf("intValue  = %d\n", intValue);

	//　double型　小数点以下の数値を含む値を入れるための変数。仮に%dを用いようとしても正しく表示されない
	double doubleValue = 12.8;
	printf("doubleValue = %f\n", doubleValue);

	// float型　少数を入れるための変数
	//　ゲームプログラミングでは大体doubleではなくfloatが使われる
	//　doubleは処理が重く、メモリの消費が激しい
	float floatValue = 45.699998f; //floatを使うときは数値の最後にfをつける。またこの時も%fを使用する
	printf("floatValue = %f\n", floatValue);

	//char型　半角一文字を入れるための変数
	char charValue = 'a';  //変数を書く時、一文字の周りをシングルクォーテーションで囲む
	//printfするときは%cを使用する
	printf("charValue = %c\n", charValue);
	*/

	//四則演算以外の演算子↓
	/*
	int a = 128;
	printf("-a = %d\n", -a);

	//インクリメント演算子
	//変数自身の値を1増やす
	a++;
	printf("a = %d\n", a);

	//デクリメント演算子
//変数自身の値を1減らす
	a--;
	printf("a = %d\n", a);

	int hp = 128;
	int enemyAttack = 16;
	printf("残りHP:%d\n", hp);

	hp = hp - enemyAttack;
	printf("%dダメージを受けた！\n", enemyAttack);
	printf("残りHP:%d\n", hp);

	//偏す自身の値を変更したい場合は複合代入演算子を使う
	hp -= enemyAttack;
	printf("%dダメージを受けた！\n", enemyAttack);
	printf("残りHP:%d\n", hp);
	*/

	return 0;
}