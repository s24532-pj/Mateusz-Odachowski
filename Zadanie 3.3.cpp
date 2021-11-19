#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Ax^2 + Bx + C = 0" << endl;
    cout << "Podaj A, B, C: ";
    cin >> a >> b >> c;
    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    double d = (b * b) - (4 * a * c);
    if (d > 0) {
        double x1 = (-b - d) / (2 * a), x2 = (-b + d) / (2 * a);
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
    }
    else if (d == 0) {
        double x = -b / (2 * a);
        cout << "x0 = " << x << endl;
    }
    else {
        cout << "Brak rozwiazan" << endl;
    }

    return 0;
}