#include <iostream>
using std::cout;
using std::cin;
using std::endl;


//#define FACTORIAL
//#define POWER
//#define ASCII

void main()
{
	setlocale(LC_ALL, "");
	
	/*for (;;)
	{
		cout << "Hello FOR";
	}*/

	/*int n = 5;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}*/

	
#ifdef FACTORIAL
	int n;
	cout << "¬ведите число: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	cout << "‘акториал числа: " << f << endl;
#endif // FACTORIAL

#ifdef POWER
	double a; // основание степени
	int n; // показатель степени
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель стпени: "; cin >> n;
	double N = 1; // итогова€ степень
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 1; i <= n; i++)
	{
		N *= a;
	}
	cout << "»тогова€ степень: " << N << endl;
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int i = 1; i < n; i++)
	{
		bool simple = true; //»значально предполагаем что число простое, но это нужно проверить:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
}