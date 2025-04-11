#include <iostream>
using namespace std;

//#define Task_1
//#define Task_2
//#define Task_3
//#define Task_4
//#define Task_5
//#define ROMB
//#define Task_7
#define Task_7_bonus 

void main()
{
	setlocale(LC_ALL, "");
	int h;
	cout << "¬ведите число: "; cin >> h;

#ifdef Task_1
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Task_1

#ifdef Task_2
	for (int i = 1; i <= h; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Task_2

#ifdef Task_3
	for (int i = 1; i <= h; i++)
	{
		for (int j = h; j >= i; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Task_3

#ifdef Task_4
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j < h - i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Task_4

#ifdef Task_5
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < h - i - 1; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Task_5

#ifdef ROMB

	for (int i = 0; i < h; i++)
	{
		for (int j = i; j < h; j++) cout << "."; cout << "/";
		for (int j = 0; j < i; j++) cout << ".."; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0 - 1)
	}
#endif // ROMB

#ifdef Task_7
	for (int i = 0; i < h; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < h; j++)
			{
				if (j % 2 == 0)
				{
					cout << "+ ";
				}
				else
				{
					cout << "- ";
				}
			}
		}
		else
		{
			for (int j = 0; j < h; j++)
			{
				if (j % 2 == 0)
				{
					cout << "- ";
				}
				else
				{
					cout << "+ ";
				}
			}
		}
		cout << endl;
	}
#endif // Task_7

#ifdef Task_7_bonus
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < h; j++)
		{
			//if ((i + j) % 2 == 0) cout << "+ "; else cout << "- ";
			//if (i % 2 == j % 2) cout << "+ "; else cout << "- ";
			//i % 2 == j % 2 ? cout << "+ ": cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // Task_7_bonus

}