﻿#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define HORIZONTAL_LINE		(char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			"\xDB\xDB"		//(char)219
#define BLACK_BOX			"\x20\x20"

//#define ChessBoard 
//#define HardChess
void main()
{
	//for (int i = 176; i < 224; i++)
//{
//	//if (i % 16 == 0) cout << endl;
//	cout << i << (char)i << " ";
//}
//cout << endl;

	setlocale(LC_ALL, "");

#ifdef ChessBoard
	int n;
	cout << "Введите размер доски: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n) cout << VERTICAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
			//cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}
#endif // ChessBoard

#ifdef HardChess
	int size;
	cout << "Введите размер доски: "; cin >> size;

	for (int row = 0; row < size; row++) {
		for (int i = 0; i < size; i++) {
			for (int col = 0; col < size; col++) {
				if ((row + col) % 2 == 0) {
					for (int j = 0; j < size; j++) {
						cout << "* ";
					}
				}
				else {
					for (int j = 0; j < size; j++) {
						cout << "  ";
					}
				}
			}
			cout << endl;
		}
	}
#endif // HardChess

}