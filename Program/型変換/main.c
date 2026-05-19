#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);
//	int a = 123.4;  //整数型の変数に少数を代入しようとしているが、int型はむり
//	printf("a = %d\n", a);

	//int a = 1;
	//float b = 1.5f;

	//printf("a+b = %f\n", a+b);  //a+bはfloat型となっている

	//int iNum = 3;
	//float fNum = iNum; //float型に変換してから代入される
	//printf("fNum = %f\n", fNum);

	//キャスト
	//自動的に行われる型の変換を手動で行える
	float fNum = 3.14f;
	//int iNum = fNum;  //自動的にfloatがintに変換されて代入される→警告
	int iNum = (int)fNum;  //キャストを使ってintに変換してから代入→OK

	printf("iNum = %d\n", iNum);

	return 0;
}