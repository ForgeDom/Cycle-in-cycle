#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;
	cout << "������ ����� ����:" << endl;
	cin >> a;
	cout << "������ ����� ����:" << endl;
	cin >> b;
	while (a >= b) {
		cout << "����� ���� �� ���� �����" << endl;
		cout << "������ ����� ����:" << endl;
		cin >> a;
		cout << "������ ����� ����:" << endl;
		cin >> b;
	}
	do {
		cout << "������ �����:" << endl;
		cin >> c;
		if (c < a || c > b) {
			cout << "����� �� ������� � �������" << endl;
		}
	} while(c < a || c > b);
	cout << "����� ������� � �������!" << endl;
	return 0;
}