#include <iostream>

using namespace std;

int main() {
    unsigned int a, b;
    cout << "Podaj a i b: ";
    cin >> a >> b;

    // A
    cout << "a = " << a << endl << "b = " << b << endl;

    //B
    cout << "Wiersz o dlugosci a:" << endl;
    for (unsigned int i = 0; i < a; ++i)
        cout << "*";
    cout << endl;

    //C
    cout << "Kolumna o dlugosci b:" << endl;
    for (unsigned int i = 0; i < b; ++i)
        cout << "*" << endl;

    //D
    cout << "Prostokat o wymiarach a i b:" << endl;
    for (unsigned int i = 0; i < a; ++i) {
        for (unsigned int j = 0; j < b; ++j)
            cout << "*";
        cout << endl;
    }

    //E
    cout << "Obwod prostokatu o wymiarach a i b:" << endl;
    for (unsigned int i = 0; i < a; ++i) {
        if (i == 0 || i == a - 1) {
            for (unsigned int j = 0; j < b; ++j)
                cout << "*";
        }
        else {
            cout << "*";
            for (unsigned int j = 0; j < b - 2; ++j)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    //F
    cout << "Trojkat prostokatny rownoramienny:" << endl;
    for (unsigned int i = 0; i < a; ++i) {
        for (unsigned int j = 0; j < i + 1; ++j)
            cout << "*";
        cout << endl;
    }

    //G
    cout << "Trojkat prostokatny rownoramienny odwrotny:" << endl;
    for (unsigned int i = 0; i < a; ++i) {
        for (unsigned int j = 0; j < a - i; ++j)
            cout << "*";
        cout << endl;
    }

    return 0;
}