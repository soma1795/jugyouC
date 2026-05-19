#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);
	/*
	int hp = 100;

	//hp++ 前置
	++hp; //後置
	printf("++によってhpの値は%dになりました\n", hp);  //101

	//hp-- 前置
	--hp; //後置
	printf("--によってhpの値は%dになりました\n", hp);  //100
	*/

	int a = 0;
	int b = 5;

	//後置の場合、bがaの値に代入されたのち、bがインクリメントされる
	//a = b++;の場合、a=5,b=6
	//前置の場合、bがインクリメントされたのち、bの値がaに代入される
	//a = ++b;  //この場合a=6,b=6

	//前置と後置で挙動が異なるため、その違いは理解しておこう
	
	//このあたりの理解があいまいでも、問題なくかけるプログラムを書こう！

	//aに代入してから、bをインクリメントしたい場合
	a = b;
	b++; //このとき順不同

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}