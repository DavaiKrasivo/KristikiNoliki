// KristikiNoliki.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
/*draw-функция прорисовки массива*/
void draw(char* a)
{
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			cout << a[k+i*2]) << "  ";
		}
		cout << endl << endl << endl;
	}
}
int main()
{
	
		char a[3][3]; // игровое поле
		char ch=' ';
		int flag=1;
		int victory = 0; //флаг для определения победы
		a[0][0] = '1';
		a[0][1] = '2';
		a[0][2] = '3';
		a[1][0] = '4';
		a[1][1] = '5';
		a[1][2] = '6';
		a[2][0] = '7';
		a[2][1] = '8';
		a[2][2] = '9';
	while (flag) {
		for (int i = 0; i<25; i++)
			cout << "\n";
		draw(&a[0][0]);
		/* Цикл где поочередно происходят ходы игроков
		*/
		while (!victory)
		{ 
			/* Ход первого игрока*/
			ch = _getch();
			if ((ch > '9') |(ch<'0'))
			{
				continue;
			}
			switch (ch)
			{
			case '1':if (a[0][0] != '1') { continue; break; }
					 else
					 {
						 a[0][0] = 'X'; break;
					 }
			case '2':if (a[0][1] != '2') { continue; break; }
					 else
					 {
						 a[0][1] = 'X'; break;
					 }
			case '3':if (a[0][2] != '3') { continue; break; }
					 else
					 {
						 a[0][2] = 'X'; break;
					 }
			case '4':if (a[1][0] != '4') { continue; break; }
					 else
					 {
						 a[1][0] = 'X'; break;
					 }
			case '5':if (a[1][1] != '5') { continue; break; }
					 else
					 {
						 a[1][1] = 'X'; break;
					 }
			case '6':if (a[1][2] != '6') { continue; break; }
					 else
					 {
						 a[1][2] = 'X'; break;
					 }
			case '7':if (a[2][0] != '7') { continue; break; }
					 else
					 {
						 a[2][0] = 'X'; break;
					 }
			case '8':if (a[2][1] != '8') { continue; break; }
					 else
					 {
						 a[2][1] = 'X'; break;
					 }
			case '9':if (a[2][2] != '9') { continue; break; }
					 else
					 {
						 a[2][2] = 'X'; break;
					 }
			default:
				break;
			}
			for (int i = 0; i<25; i++)
				cout << "\n";
			draw(&a[0][0]);
			/* Ход второго игрока*/
			while (1) {
				ch = _getch();
				if ((ch > '9') | (ch<'0'))
				{
					continue;
				}
				switch (ch)
				{
				case '1':if (a[0][0] != '1') { continue; break; }
						 else
				{
					a[0][0] = 'O'; break;
				}
				case '2':if (a[0][1] != '2') { continue; break; }
						 else
						 {
							 a[0][1] = 'O'; break;
						 }
				case '3':if (a[0][2] != '3') { continue; break; }
						 else
						 {
							 a[0][2] = 'O'; break;
						 }
				case '4':if (a[1][0] != '4') { continue; break; }
						 else
						 {
							 a[1][0] = 'O'; break;
						 }
				case '5':if (a[1][1] != '5') { continue; break; }
						 else
						 {
							 a[1][1] = 'O'; break;
						 }
				case '6':if (a[1][2] != '6') { continue; break; }
						 else
						 {
							 a[1][2] = 'O'; break;
						 }
				case '7':if (a[2][0] != '7') { continue; break; }
						 else
						 {
							 a[2][0] = 'O'; break;
						 }
				case '8':if (a[2][1] != '8') { continue; break; }
						 else
						 {
							 a[2][1] = 'O'; break;
						 }
				case '9':if (a[2][2] != '9') { continue; break; }
						 else
						 {
							 a[2][2] = 'O'; break;
						 }
				default:
					break;
				}
				for (int i = 0; i < 25; i++)
					cout << "\n";
				draw(&a[0][0]);
				break;
			}

		}
		cout << "Again?(Y/N)"<< endl;
		while (1)
		{
			ch = _getch();
			if (ch != 121)
			{
				if (ch != 110) 
				{
					continue;
				}
			}
			if (ch == 121)
			{
				flag = 1; break;
			}
			if (ch == 110)
			{
				flag = 0; break;
			}
		}
	}
	
    return 0;
}

