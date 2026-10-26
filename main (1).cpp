#include <iostream>

using namespace std;

// Завдання 1.1 (If10)
void task1() {
    cout << "\n--- Завдання 1.1 (If10) ---" << endl;
    int A, B;
    cout << "Введіть ціле число A: ";
    cin >> A;
    cout << "Введіть ціле число B: ";
    cin >> B;

    if (A != B) {
        int sum = A + B;
        A = sum;
        B = sum;
    } else {
        A = 0;
        B = 0;
    }

    cout << "Нове значення A = " << A << endl;
    cout << "Нове значення B = " << B << endl;
}

// Завдання 1.2 (If29)
void task2() {
    cout << "\n--- Завдання 1.2 (If29) ---" << endl;
    int n;
    cout << "Введіть ціле число: ";
    cin >> n;

    if (n == 0) {
        cout << "нульове число" << endl;
    } else {
        // Перевірка на додатність / від'ємність
        if (n > 0) {
            cout << "додатне ";
        } else {
            cout << "від’ємне ";
        }

        // Перевірка на парність / непарність
        if (n % 2 == 0) {
            cout << "парне число" << endl;
        } else {
            cout << "непарне число" << endl;
        }
    }
}

// Завдання 2 (Варіант 4 — Червона фігура / Круг)
void task3() {
    cout << "\n--- Завдання 2 (Варіант 4) ---" << endl;
    double x, y, r;

    cout << "Введіть радіус r: ";
    cin >> r;
    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть y: ";
    cin >> y;

    // Центр кола зміщений по осі X на радіус r (точка r, 0)
    // Формула: (x - r)^2 + y^2 <= r^2
    if ((x - r) * (x - r) + y * y <= r * r) {
        cout << "Точка потрапляє в червону фігуру." << endl;
    } else {
        cout << "Точка НЕ потрапляє в червону фігуру." << endl;
    }
}

int main() {
    // Налаштування української мови в консолі
    setlocale(LC_ALL, "Ukrainian");

    int choice;

    cout << "================ МЕНЮ ================" << endl;
    cout << "1 - Виконати Завдання 1.1 (If10)" << endl;
    cout << "2 - Виконати Завдання 1.2 (If29)" << endl;
    cout << "3 - Виконати Завдання 2 (Варіант 4)" << endl;
    cout << "Оберіть номер завдання: ";
    cin >> choice;

    // Вибір завдання за допомогою switch
    switch (choice) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        default:
            cout << "Некоректний вибір!" << endl;
            break;
    }

    return 0;
}