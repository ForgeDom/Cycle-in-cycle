#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int maxamount = 10;
    const double discountThreshold = 500;
    const double discountperc = 0.2;

    double price1 = 20.0;
    double price2 = 30.0;
    double price3 = 80.0;
    double price4 = 15.0;
    int amount1 = maxamount;
    int amount2 = maxamount;
    int amount3 = maxamount;
    int amount4 = maxamount;

    double totalall = 0;

    while (true) {
        cout << "��������� �������" << endl;
        cout << "===================" << endl;
        cout << "������� ����� � ������ ���� ������� (��� ������ 0, ��� ��������� �������):" << endl;

        cout << "1. ������ ��� ������ - " << price1 << " ���" << endl;
        cout << "2. ���������� ���� - " << price2 << " ���" << endl;
        cout << "3. �������� - " << price3 << " ���" << endl;
        cout << "4. ������ - " << price4 << " ���" << endl;

        double customertotalprice = 0;

        while (true) {
            int choice;
            cin >> choice;
            if (choice < 0 || choice > 4) {
                cout << "����������� ���� ������. ��������� �� ���." << endl;
                continue;
            }
            if (choice == 0) {
                break;
            }

            int quantity;
            cout << "������ �������: ";
            cin >> quantity;

            if (quantity <= 0) {
                cout << "ʳ������ ������ ������� ���� ����� ����. ��������� �� ���." << endl;
                continue;
            }

            int currentamount;
            double currentprice;
            if (choice == 1) {
                currentamount = amount1;
                currentprice = price1;
            }
            else if (choice == 2) {
                currentamount = amount2;
                currentprice = price2;
            }
            else if (choice == 3) {
                currentamount = amount3;
                currentprice = price3;
            }
            else if (choice == 4) {
                currentamount = amount4;
                currentprice = price4;
            }

            if (quantity > currentamount) {
                cout << "�� ����� ����������� ������. �������� ���� " << currentamount << " �������." << endl;
                continue;
            }

            double totalprice = currentprice * quantity;
            customertotalprice += totalprice;
            totalall += totalprice;

            if (choice == 1) {
                amount1 -= quantity;
            }
            else if (choice == 2) {
                amount2 -= quantity;
            }
            else if (choice == 3) {
                amount3 -= quantity;
            }
            else if (choice == 4) {
                amount4 -= quantity;
            }

            cout << "����� " << " (" << quantity << " ��.) ������ �� ������. �������� �������: " << customertotalprice << " ���" << endl;
        }

        cout << "�������� ���� �������: " << customertotalprice << " ���" << endl;

        if (customertotalprice >= discountThreshold) {
            double discountAmount = customertotalprice * discountperc;
            customertotalprice -= discountAmount;
            cout << "��� ������ ������ " << (discountperc * 100) << "% (" << discountAmount << " ���)" << endl;
        }

        cout << "������ �� �������!" << endl;
        cout << "===================" << endl;

        char answer;
        cout << "������������� ���������� �볺���? (y/n): ";
        cin >> answer;
        if (answer != 'y' && answer != 'Y') {
            break;
        }
    }

    cout << "��������� ����� ��������: " << totalall << " ���" << endl;

    return 0;
}
