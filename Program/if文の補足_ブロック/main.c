#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int a = -1;

	//if(a < 0);  ←セミコロンはつけない！

	//条件を満たすと、if(条件)の後の一行のみ実行される

	//処理が一行の場合も、
	// 慣れるまでは｛｝の中に処理を書く癖をつけておこう

	//教科書
	if (a < 0)
		printf("aの値は負の数です\n");
	printf("aは負の値？");  //	実行されるかそうでないか

	//授業
	if (a < 0)
	{
		//{}の中身を一行扱いして、複数処理を実行する
		printf("aの値は負の数です\n");
	}

	printf("aの値は%dです\n",a);

	return 0;
}