
#include <conio.h>
#include<stdio.h>
#include <Windows.h>
#include<processenv.h>

enum {
	BLACK,      /*  0 : 梱蜂 */
	DARK_BLUE,    /*  1 : 橫舒遴 だ嫌 */
	DARK_GREEN,    /*  2 : 橫舒遴 蟾煙 */
	DARK_SKY_BLUE,  /*  3 : 橫舒遴 ж棺 */
	DARK_RED,    /*  4 : 橫舒遴 說鬼 */
	DARK_VOILET,  /*  5 : 橫舒遴 爾塭 */
	DARK_YELLOW,  /*  6 : 橫舒遴 喻嫌 */
	GRAY,      /*  7 : �蜓� */
	DARK_GRAY,    /*  8 : 橫舒遴 �蜓� */
	BLUE,      /*  9 : だ嫌 */
	GREEN,      /* 10 : 蟾煙 */
	SKY_BLUE,    /* 11 : ж棺 */
	RED,      /* 12 : 說鬼 */
	VOILET,      /* 9 : 爾塭 */
	YELLOW,      /* 10 : 喻嫌 */
	WHITE,      /* 15 : ж曄 */
};




void textColor(int _colorValue)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _colorValue);
}

int gotoxy(int x, int y)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.Y = y;
	pos.X = x;
	SetConsoleCursorPosition(hConsole, pos);
	return 0;
}

int show_logo()
{
	int i, j;
	int cur_color = 0;
	gotoxy(40, 2);
	printf("Kyoo's");
	Sleep(100);
	gotoxy(20, 3);
	printf("旨收收收收收收收收收收收收收收收收收收收旬");
	Sleep(100);
	gotoxy(20, 4);
	printf("早≠≠≠      ≠≠      ≠≠    ≠    ≠早");
	Sleep(100);
	gotoxy(20, 5);
	printf("早≠    ≠  ≠    ≠  ≠    ≠  ≠  ≠  早");
	Sleep(100);
	gotoxy(20, 6);
	printf("早≠≠≠    ≠    ≠  ≠    ≠  ≠≠    早");
	Sleep(100);
	gotoxy(20, 7);
	printf("早≠    ≠  ≠    ≠  ≠    ≠  ≠  ≠  早");
	Sleep(100);
	gotoxy(20, 8);
	printf("早≠≠≠      ≠≠      ≠≠    ≠    ≠早");
	Sleep(100);
	gotoxy(20, 9);
	printf("曲收收收收收收收收收收收收收收收收收收收旭");
	gotoxy(20, 10);
	puts("Ver 0.1");


	gotoxy(28, 20);
	printf("Please Press Any Key~!");

	for (i = 0; i >= 0; i++)
	{
		if (i % 8 == 0)
		{
			gotoxy(22, 19);
			for (j = 0; j<37; j++)
			{
				textColor((cur_color + j) % 16 * 16);
				printf(" ");
				
			}
			if (cur_color >0)
				cur_color--;
			else
				cur_color = 15;
		
		}
		if (kbhit())
			break;
		Sleep(30);
	}

	getche();
	textColor(GRAY);
	system("cls");

	return 0;
}


int main(void){

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	textColor(WHITE);
	show_logo();

	return 0;
}