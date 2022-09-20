
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int x = 0;
    int y = 0;

    cout << "Консольный калькулятор. \n" << endl;
    cout << "Введите два положительных целых числа."
        << endl;

    cin >> x;
    cin >> y;
    cout << "Сложение: " << x + y << endl;
    cout << "Вычетание: " << x - y << endl;
    cout << "Умножение: " << x * y << endl;
    cout << "Целая часть от деления: " << x / y << endl;
    cout << "Остаток от деления: " << x % y << endl;

    return 0;
}
