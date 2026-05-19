#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	//足し算と引き算
	printf(" 1 + 2 = %d\n", 1 + 2);
	printf(" 3 - 1 = %d\n", 3 - 1);

	//数値の指定、そして表示
	printf("数値を直接指定して表示できる　%d\n", 1024);

	return 0;
}