#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;
	cout << "¬вед≥ть першу межу:" << endl;
	cin >> a;
	cout << "¬вед≥ть другу межу:" << endl;
	cin >> b;
	while (a >= b) {
		cout << "ѕерша межа маЇ бути менша" << endl;
		cout << "¬вед≥ть першу межу:" << endl;
		cin >> a;
		cout << "¬вед≥ть другу межу:" << endl;
		cin >> b;
	}
	do {
		cout << "¬вед≥ть число:" << endl;
		cin >> c;
		if (c < a || c > b) {
			cout << "„исло не входить в д≥апазон" << endl;
		}
	} while(c < a || c > b);
	cout << "„исло входить в д≥апазон!" << endl;
	return 0;
}