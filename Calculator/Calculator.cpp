#include <iostream>
using namespace std;

void menu();
void summ();
void subtraction();
void multiplication();
void division();
void divisionWithRemainder();
void fibonacci();

int x = 0;
int y = 0;
int result = 0;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Я очень люблю считать цифры.\n";
    menu();
}

void menu() {
    cout << "\nВыберите действие: \n1.Сложение\n2.Вычитание\n3.Умножение\n4.Деление\n5.Деление с остатком\n6.Числа Фиббоначи\n7.Выйти из программы\n";

    int key = 0;

    while (key != 1 || key != 2 || key != 3 || key != 4 || key != 5 || key != 6 || key != 7) {

        cin >> key;
        system("cls");

        switch (key)
        {
        case 1:
            summ();
            break;

        case 2:
            subtraction();
            break;

        case 3:
            multiplication();
            break;

        case 4:
            division();
            break;

        case 5:
            divisionWithRemainder();
            break;

        case 6:
            fibonacci();
            break;

        case 7:
            cout << "Не хочешь считать цифры? Пока.";
            exit(0);
            break;

        default:
            cout << "Вы ввели неверное значение! Попробуйте еще раз.\n";
            cout << "\nВыберите действие: \n1.Сложение\n2.Вычитание\n3.Умножение\n4.Деление\n5.Деление с остатком\n6.Числа Фиббоначи\n7.Выйти из программы\n";
            break;
        }
    }
}

void summ() {
    cout << "СЛОЖЕНИЕ\n";
    cout << "-----------------------------\n";

    cout << "Введите два числа:\n";
    cin >> x,
        cin >> y;
    result = x + y;

    printf("Ответ: %i \n", result);
    cout << "-----------------------------\n";
    menu();
}

void subtraction() {
    cout << "ВЫЧИТАНИЕ\n";
    cout << "-----------------------------\n";

    cout << "Введите два числа:\n";
    cin >> x;
    cin >> y;
    result = x - y;

    printf("Ответ: %i \n", result);
    cout << "-----------------------------\n";
    menu();
}

void multiplication() {
    cout << "УМНОЖЕНИЕ\n";
    cout << "-----------------------------\n";

    cout << "Введите два числа:\n";
    cin >> x;
    cin >> y;
    result = x * y;

    printf("Ответ: %i \n", result);
    cout << "-----------------------------\n";
    menu();
}

void division() {
    cout << "ДЕЛЕНИЕ\n";
    cout << "-----------------------------\n";
    cout << "Введите два числа:\n";
    cin >> x;
    cin >> y;

    if (x == 0||y == 0) {
        cout << "Деление на 0 невозможно\n";
        division();
    }

    else {
        result = x / y;
    
        printf("Ответ: %i \n", result);
        cout << "-----------------------------\n";
        menu();
    }
}

void divisionWithRemainder() {
    cout << "ДЕЛЕНИЕ С ОСТАТКОМ\n";
    cout << "-----------------------------\n";

    cout << "Введите два числа:\n";
    cin >> x;
    cin >> y;
    result = x % y;

    if (x == 0 || y == 0) {
        cout << "Деление на 0 невозможно\n";
        division();
    }

    else {
        result = x / y;

        printf("Остаток: %i \n", result);
        cout << "-----------------------------\n";
        menu();
    }
}

void fibonacci() {

    cout << "ЧИСЛА ФИБОНАЧЧИ\n";
    cout << "---------------------------------------\n";
    cout << "Введите количество чисел Фибоначчи: ";

    int count; cin >> count;
    int sum = 0, fib = 0, fib1 = 1;
    cout << "0 ";
    for (int i = 0; i < count; i++)
    {
        fib += fib1;    
        fib1 = fib - fib1;
        cout << fib << " ";
        sum += fib;
    }
    cout <<"\nСумма чисел = " << sum;

    cout << "\n---------------------------------------\n";
    menu();
}
