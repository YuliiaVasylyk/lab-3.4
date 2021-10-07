// Lab_03_4.cpp
// <Василик Юлія>
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 2
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // вхідний параметр
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    if ((x >= -R && x <= 0 && y <= R && y >= 0 && y * y <= R * R - x * x) || (x > 0 && x <= R / 2 && y >= R && y <= 0 && y >= 2 * x) || (x >= R / 2 && x <= R && y >= R && y <= 0 && y >= 2 * x - 2 * R))

        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}


