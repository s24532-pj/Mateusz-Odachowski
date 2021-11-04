#include <iostream>

using namespace std;

int main() {
    unsigned short n;
    cout << "Podaj n z przedziału [1, 12]:";
    cin >> n;
    switch (n) {
    case 1:
        cout << "Styczen\n";
        cout << "31 dni\n";
        cout << "Pochmurno\n";
        break;
    case 2:
        cout << "Luty\n";
        cout << "28 dni\n";
        cout << "Pochmurno\n";
        break;
    case 3:
        cout << "Marzec\n";
        cout << "31 dni\n";
        cout << "Pochmurno\n";
        break;
    case 4:
        cout << "Kwiecien\n";
        cout << "30 dni\n";
        cout << "Pochmurno\n";
        break;
    case 5:
        cout << "Maj\n";
        cout << "31 dni\n";
        cout << "Slonecznie\n";
        break;
    case 6:
        cout << "Czerwiec\n";
        cout << "30 dni\n";
        cout << "Slonecznie\n";
        break;
    case 7:
        cout << "Lipiec\n";
        cout << "31 dni\n";
        cout << "Slonecznie\n";
        break;
    case 8:
        cout << "Sierpien\n";
        cout << "31 dni\n";
        cout << "Slonecznie\n";
        break;
    case 9:
        cout << "Wrzesien\n";
        cout << "30 dni\n";
        cout << "Slonecznie\n";
        break;
    case 10:
        cout << "Pazdziernik\n";
        cout << "31 dni\n";
        cout << "Pochmurno\n";
        break;
    case 11:
        cout << "Listopad\n";
        cout << "30 dni\n";
        cout << "Pochmurno\n";
        break;
    case 12:
        cout << "Grudzien\n";
        cout << "31 dni\n";
        cout << "Pochmurno\n";
        break;
    default:
        cout << "Podano niepoprawna liczbe" << endl;
    }

    return 0;
}
