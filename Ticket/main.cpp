#include <iostream>
using namespace std;


//#define VERSION1
//#define VERSION2

void main()
{
	setlocale(LC_ALL, "");

#if defined VERSION1
	int number_of_ticket;
	cout << "������� ����� ������: "; cin >> number_of_ticket;
	int left_buffer = number_of_ticket;
	int right_buffer = number_of_ticket;
	int left_part = 0;
	int right_part = 0;
	left_buffer /= 1000;
	left_part += left_buffer % 10;
	left_buffer /= 10;
	left_part += left_buffer % 10;
	left_buffer /= 10;
	left_part += left_buffer % 10;
	left_buffer /= 10;
	{
		right_part += right_buffer % 10;
		right_buffer /= 10;
		right_part += right_buffer % 10;
		right_buffer /= 10;
		right_part += right_buffer % 10;
		right_buffer /= 10;
		//break;
	}
	if (left_part == right_part)
	{
		cout << "��� ���������� �����" << endl;
	}
	else
	{
		cout << "��� ������� �����" << endl;
	}
#endif

#if defined VERSION2
	int number;
	cout << "������� ����� ����������� ������: "; cin >> number;
	int sum_1 = 0; //����� ���� ������� ��������
	int sum_2 = 0; //����� ���� ������� ��������

	while (number > 1000)
	{
		sum_1 += number % 10;
		number /= 10;
	}
	while (number > 0)
	{
		sum_2 += number % 10;
		number /= 10;
	}
	cout << sum_1 << endl;
	cout << sum_2 << endl;
#endif
}