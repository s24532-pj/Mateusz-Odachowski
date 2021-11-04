#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Podaj n: ";
    unsigned int n;
    cin >> n;
    string res = "Suma szeregu: ";
    unsigned int res_i = 0;
    for (int i = 0; i < n; ++i) {
        unsigned int sum = 0;
        for (int j = 0; j < i; ++j) {
            cout << j + 1 << " + ";
            sum += j + 1;
        }
        cout << i + 1 << " = " << sum + i + 1 << endl;
        res_i += sum + i + 1;
        if (i < n - 1) {
            res += to_string(sum + i + 1);
            res += " + ";
        }
        else {
            res += to_string(sum + i + 1);
        }
    }
    res += " = ";
    res += to_string(res_i);
    cout << res << endl;

    return 0;
}