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
        cout << "Новорічний магазин" << endl;
        cout << "===================" << endl;
        cout << "Виберіть товар і введіть його кількість (або введіть 0, щоб завершити покупки):" << endl;

        cout << "1. Кульки для ялинки - " << price1 << " грн" << endl;
        cout << "2. Бенгальські вогні - " << price2 << " грн" << endl;
        cout << "3. Герлянди - " << price3 << " грн" << endl;
        cout << "4. Дощики - " << price4 << " грн" << endl;

        double customertotalprice = 0;

        while (true) {
            int choice;
            cin >> choice;
            if (choice < 0 || choice > 4) {
                cout << "Некоректний вибір товару. Спробуйте ще раз." << endl;
                continue;
            }
            if (choice == 0) {
                break;
            }

            int quantity;
            cout << "Введіть кількість: ";
            cin >> quantity;

            if (quantity <= 0) {
                cout << "Кількість товару повинна бути більше нуля. Спробуйте ще раз." << endl;
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
                cout << "На складі недостатньо товару. Доступно лише " << currentamount << " одиниць." << endl;
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

            cout << "Товар " << " (" << quantity << " шт.) додано до кошика. Загальна вартість: " << customertotalprice << " грн" << endl;
        }

        cout << "Загальна сума покупок: " << customertotalprice << " грн" << endl;

        if (customertotalprice >= discountThreshold) {
            double discountAmount = customertotalprice * discountperc;
            customertotalprice -= discountAmount;
            cout << "Вам надано знижку " << (discountperc * 100) << "% (" << discountAmount << " грн)" << endl;
        }

        cout << "Дякуємо за покупку!" << endl;
        cout << "===================" << endl;

        char answer;
        cout << "Обслуговувати наступного клієнта? (y/n): ";
        cin >> answer;
        if (answer != 'y' && answer != 'Y') {
            break;
        }
    }

    cout << "Загальний дохід магазину: " << totalall << " грн" << endl;

    return 0;
}
