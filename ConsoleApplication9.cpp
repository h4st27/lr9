

#include <iostream> 
#include <conio.h>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
float y = 2;
	cout << "������ ���������� ����� ��� �����: ";
	cin >> x;
	switch (x)
	{
	case 1: cout << "\n15.00 ����� �� ��������\n"; break;
	case 2: cout << "\n13.00 ����� �� �����������\n"; break;
	case 3: cout << "\n19:30 ����� � ��������\n"; break;
	case 4: cout << "\n9.00 ����� �� �����\n"; break;
	case 5: cout << "\n17.00 ����� �� ���������\n"; break;
	case 6: cout << "\n11.00 ĳ���� ������\n"; break;
	case 7: cout << "\n�� ��� ���� ����� �� �����������\n"; break;
	default: cout << "\n������ ��� ����� �� ����\n"; break;
	}
//��������

}



