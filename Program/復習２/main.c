#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);

	int hp = 100 + 200;
	
	printf("初期HP:%d\n", hp);

	hp = -hp;
	printf("HP反転：%d\n", hp);
	hp = +hp;

	//インクリメント
	//中身の数値を１増やす
	hp++;
	printf("HP++：%d\n", hp);
	hp++;
	printf("HP++：%d\n", hp);

	//デクリメント
	//中身の数値を１減らす
	//後置
	hp--;
	printf("HP--：%d\n", hp);

	//前置
	--hp;
	printf("HP--：%d\n", hp);

	//インクリメント　デクリメントの前置、後置の違い
	hp = 100;
	printf("HP++ = %d\n", hp++);  //後置の場合、変数の表示が行われたのちにインクリメント
	printf("HP = %d\n", hp);
	hp = 100;
	printf("++HP = %d\n", ++hp);  //前置の場合、インクリメントされたのちに変数の表示
	printf("HP = %d\n", hp);

	//↑のような書き方だと理解をしっかりしていないと間違える
	//自分はわかっていてもプログラムを見る人がわかっているとは限らない
	//そういう人でもパッと見てわかる書き方をしよう！

	hp = 100;
	printf("HP = %d\n", hp);
	hp++;


	return 0;
}