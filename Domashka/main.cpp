#include <iostream>
using namespace std;

//#define Hard_Chess
//#define Remove

void main()
{
	setlocale(LC_ALL, "");

#ifdef Remove
	int a;
	int b;
	cout << "До обмена: " << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	a ^= b;
	b ^= a;
	a ^= b;
	cout << "После обмена: " << "a = " << a << "; b = " << b << endl;
#endif // Remove

#ifdef Hard_Chess
	int size;
	cout << "Введите размер доски: "; cin >> size;
	for (int row = 0; row < size; row++)
	{
		for (int i = 0; i < size; i++)
		{
			for (int col = 0; col < size; col++)
			{
				for (int j = 0; j < size; j++)
				{
					cout << (~row & 1 ^ col & 1 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif // Hard_Chess

}