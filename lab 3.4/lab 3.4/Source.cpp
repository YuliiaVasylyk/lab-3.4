// Lab_03_4.cpp
// <������� ���>
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 2
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x; // ������� ��������
    double R{}; // ������� ��������
    double y; // ������� ��������
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if ((1. / 4) * (x * x) + (1. / 4) * (y * y) <= ((1. / 4) * (R * R)) || y >= -2 * x && y <= -1 / 2 * x)

        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
