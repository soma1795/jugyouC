#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	//四則演算は掛け算と割り算が優先される
	int a = 2 + 3 * 5;
	printf("2 + 3 * 5 = %d\n", a);  //17

	//()でくくることで計算の優先順位は変えられる
	int b = (2 + 3) * 5;
	printf("(2 + 3) * 5 = %d\n", b);//25

	//優先順位が同じ場合左から
	int c = 6 - 2 - 1;

	printf("6 - 2 - 1 = %d\n", c); //3

	//=演算子は右から処理
	a = b = c; //a = 17 , b = 25 , c = 3
	// b = c から先に計算
	// →cの値がbに代入 a=17 b=3 c=3
	//そのあと　a = b が計算される
	//→bの値がaに代入される a=3 b=3 c=3

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);

	return 0;
}