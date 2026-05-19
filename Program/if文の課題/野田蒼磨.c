#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int num = 123;

	if (num % 3 == 0)
	{
		printf("3nobaisuu!\n");
	}

	return 0;
}