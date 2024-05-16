#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int col, row;
	int choise;
	cout << "Enter col:" << endl;
	cin >> col;
	cout << "Enter row:" << endl;
	cin >> row;
	cout << "Make choice[1-5]:" << endl;
	cin >> choise;
	while (true) {
		switch (choise) {
			case 1:
				for (int i = 0; i < col; i++) {
					for (int j = 0; j < row; j++) {
						if (i <= j) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}
					}
					cout << endl;
				}
				break;
			case 2:
				for (int i = 0; i < col; i++) {
					for (int j = 0; j < row; j++) {
						if (i >= j) {
							cout << "*" << " ";
						}
					}
					cout << endl;
				}
				break;
			case 3:
				for (int i = 0; i < col; ++i) {
					for (int j = 0; j < row; ++j) {
						if (i <= col / 2 && (j >= i && j < row - i))
							cout << "*";
						else
							cout << " ";
					}
					cout << endl;
				}
				break;
			case 4:
				int mid_r, mid_l;
				mid_r = mid_l = row/2;
				for (int i = 0; i < col; ++i) {
					for (int j = i; j < row - 1; ++j) {
						cout << " ";
					}
					for (int k = 0; k < 2 * i + 1; ++k) {
						cout << "*";
					}
					cout << endl;
				}

				break;
			case 5:
				for (int i = 0; i < col; ++i) {
					for (int j = 0; j < row; ++j) {
						if (i <= col / 2 && (j >= i && j < col - i) || (i > col / 2 && (j >= row - i - 1 && j <= i)))
							cout << "*";
						else
							cout << " ";
					}
					cout << endl;
				}
				break;
		}
		break;
	}
	
	return 0;
}