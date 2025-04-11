#include <iostream>
#include <conio.h>
using namespace std;

#define W	119
#define A	97
#define S	115
#define D	100
#define Enter	13
#define Escape	27
#define Space	32

#define UpArrow	72
#define DownArrow	80
#define LeftArrow	75
#define RightArrow	77

//#define version1
//#define version2

void main()
{
	setlocale(LC_ALL, "");

#if defined version1
	char key;
	do
	{
		key = _getch();
		if (key == W)
		{
			cout << key << "\t" << "вперёд" << endl;
		}
		else if (key == A)
		{
			cout << key << "\t" << "влево" << endl;
		}
		else if (key == S)
		{
			cout << key << "\t" << "назад" << endl;
		}
		else if (key == D)
		{
			cout << key << "\t" << "вправо" << endl;
		}
		else if (key == Enter)
		{
			cout << "enter" << "\t" << "огонь" << endl;
		}
		else if (key == Space)
		{
			cout << "space" << "\t" << "прыжок" << endl;
		}
		else if (key == Escape)
		{
			cout << "escape" << "\t" << "выход" << endl;
		}
		else
		{
			cout << key << "\t" << "error" << endl;
		}
	} while (true);
#endif

#if defined version2
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UpArrow)
		{
			cout << "вперёд" << endl;
		}
		else if (key == 's' || key == 'S' || key == DownArrow)
		{
			cout << "назад" << endl;
		}
		else if (key == 'a' || key == 'A' || key == LeftArrow)
		{
			cout << "влево" << endl;
		}
		else if (key == 'd' || key == 'D' || key == RightArrow)
		{
			cout << "вправо" << endl;
		}
		else if (key == ' ')
		{
			cout << "прыжок" << endl;
		}
		else if (key == Enter)
		{
			cout << "огонь" << endl;
		}
		else if (key == Escape)
		{
			cout << "выход" << endl;
		}
		else
		{
			if (key != -32)cout << "error" << endl;
		}
	} while (key != Escape);
#endif

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow:
		case 'w':case 'W': cout << "Вперед" << endl; break;
		case DownArrow:
		case 's': case 'S': cout << "Назад" << endl; break;
		case LeftArrow:
		case 'a': case 'A': cout << "Влево" << endl; break;
		case RightArrow:
		case 'd':case 'D': cout << "Вправо" << endl; break;
		
		case ' ':  cout << "Прыжок" << endl; break;
		case Enter: cout << "Огонь" << endl; break;
		case Escape:
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
	
}