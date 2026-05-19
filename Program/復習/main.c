#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	//変数の宣言
	//データ型　変数名
	//変数名は基本的に英語でつけよう
	int hp;

	//変数に値を代入
	//　=　演算子を使用して値を代入
	hp = 21000;

	//printfをつかって変数の中身を表示
	printf("HP:%d\n", hp);
	//変数
	//int:整数
	//float:小数点以下の値を持つ数値(誤差あり、高速でメモリ消費少なめ)
	//double:小数点以下の値を持つ数値(誤差少なめ、低速でメモリ消費多め)
	//char:半角一文字

	double doubledata;
	doubledata = 12.345;
	printf("DOUBLEDATA = %f\n", doubledata);

	float floatData;
//	floatData = 54.321; //doubleのデータをfloatの変数に代入しようとしているため、時間がかかる
	floatData = 54.321f; //数値の後にfをつけることで最初からfloat型として扱える
	printf("floatData = %f\n", floatData);

	char charData;
	charData = 'a'; //半角一文字を扱う場合、''(singlequotation)でくぎる
	printf("charData = %c\n", charData);

	return 0;
}