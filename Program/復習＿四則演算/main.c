#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);
	//変数の初期化
	//変数宣言と同時に代入
	//特に初期化したい値がない場合もだいたいは０で初期化
	int hp = 100;

	printf("HP:%d\n", hp);

	//四則演算
	  //足し算(加算)
	  //	演算子
	hp = 100 + 200;  //右辺の計算結果が変数に代入される
	printf("+HP:%d\n", hp);

	//引き算(減算)
	hp = 500 - 100;
	printf("-HP:%d\n", hp);

	//掛け算　乗算
	hp = 100 * 372;
	printf("*HP: %d\n", hp);

	//割り算　除算
	hp = 90000 / 5;
	printf("/HP: %d\n", hp);

	//余のある割り算　余算
	hp = 19000 % 13;
	printf("%%HP: %d\n",hp); //文字の％を表示したい場合、％％と重ねて表記する

	//割り算の余は切り捨てられる
	hp = 158 / 10;
	printf("HP: %d\n", hp);

	//小数点以下を扱うデータ型のことを
	//浮動小数点数　と呼ぶ

	//余の計算は浮動小数に対しては行えない
	float testFloat1 = 128.0f;
	float testFloat2 = 10.0f;

	// float result = testFloat1 % testFloat2; これだとエラーが出る

	return 0;
}