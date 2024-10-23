#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void COUT(double mas[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(6) << mas[i] << " ";
    }
    cout << endl;
}

double Max(double mas[], int size) {
    double max = mas[0];
    for (int i = 1; i < size; i++) {
        if (mas[i] > max) {
            max = mas[i];
        }
    }
    return max;
}

int Last(double mas[], int size) {
    int last = -1;
    for (int i = 0; i < size; i++) {
        if (mas[i] > 0) {
            last = i;
        }
    }
    return last;
}

double Sum(double mas[], int last) {
    double sum = 0;
    for (int i = 0; i < last; i++) {
        sum += mas[i];
    }
    return sum;
}

void NULLS(double mas[], int size, double a, double b) {
    for (int i = 0; i < size; i++) {
        if (abs(mas[i]) >= a && abs(mas[i]) <= b) {
            mas[i] = 0;
        }
    }
}

int main() {
    setlocale(LC_CTYPE, "ukr");

    int n;
    double a, b;

    cout << "����i�� �i���i��� �������i� ������ n: ";
    cin >> n;

    cout << "I������� ��� ���������: ";
    cin >> a >> b;

    double* mas = new double[n];

    cout << "����i�� �������� ������: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }

    cout << "���������� �����: " << endl;
    COUT(mas, n);

    double max = Max(mas, n);
    cout << "������������ ������� ������: " << max << endl;

    int last = Last(mas, n);

    double sum = Sum(mas, last);
    cout << "���� �������i� (��i� ���������): " << sum << endl;

    NULLS(mas, n, a, b);

    cout << "��������� �����: " << endl;
    COUT(mas, n);

    delete[] mas;

    return 0;
}