#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	// int型　　整数を入れるためのデータ型
	//　大体ー２１億から＋２１億の間の数値を保存できる
	int intData;
	intData = -1600000;
	printf("INT:%d\n", intData);

	//double型　小数点以下の数値を入れることができるデータ型
	double doubleData;
	doubleData = 12.345678;

	printf("DOUBLE:%f\n",doubleData);

	//float型　小数点以下の数値を代入できるデータ型
	float floatData;
	floatData = 12.34567f;   //floatがたに直接数値を入れるとき数値の後にｆをつける
	printf("FLOAT:%f\n", floatData);

	//char型　文字を一文字入れることのできるデータ型　半角一文字を入れる
	char charData = 'f';  //半角一文字をシングルクオーテーションで囲う
	                        //'shiftを押しながらキーボードの７で入力
	printf("CHAR:%c\n", charData);

}