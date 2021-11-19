#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float x, y;

    cout << "Podaj x i y: ";
    cin >> x >> y;

    cout << "Suma: " << fixed << setprecision(2) << x + y << endl;
    cout << "Roznica: " << fixed << setprecision(2) << x - y << endl;
    cout << "Iloczyn: " << fixed << setprecision(2) << x * y << endl;
    cout << "Iloraz: " << fixed << setprecision(2) << x / y << endl;


    return 0;

}

