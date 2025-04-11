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
			cout << key << "\t" << "�����" << endl;
		}
		else if (key == A)
		{
			cout << key << "\t" << "�����" << endl;
		}
		else if (key == S)
		{
			cout << key << "\t" << "�����" << endl;
		}
		else if (key == D)
		{
			cout << key << "\t" << "������" << endl;
		}
		else if (key == Enter)
		{
			cout << "enter" << "\t" << "�����" << endl;
		}
		else if (key == Space)
		{
			cout << "space" << "\t" << "������" << endl;
		}
		else if (key == Escape)
		{
			cout << "escape" << "\t" << "�����" << endl;
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
			cout << "�����" << endl;
		}
		else if (key == 's' || key == 'S' || key == DownArrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'a' || key == 'A' || key == LeftArrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' || key == 'D' || key == RightArrow)
		{
			cout << "������" << endl;
		}
		else if (key == ' ')
		{
			cout << "������" << endl;
		}
		else if (key == Enter)
		{
			cout << "�����" << endl;
		}
		else if (key == Escape)
		{
			cout << "�����" << endl;
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
		case 'w':case 'W': cout << "������" << endl; break;
		case DownArrow:
		case 's': case 'S': cout << "�����" << endl; break;
		case LeftArrow:
		case 'a': case 'A': cout << "�����" << endl; break;
		case RightArrow:
		case 'd':case 'D': cout << "������" << endl; break;
		
		case ' ':  cout << "������" << endl; break;
		case Enter: cout << "�����" << endl; break;
		case Escape:
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
	
}