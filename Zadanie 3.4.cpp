#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<unsigned int> v;

void draw_triangle(unsigned int);

int main() {
    unsigned int n;
    cout << "Podaj liczbe wierszy trojkata pascala: ";
    cin >> n;

    draw_triangle(n);

    return 0;
}

void draw_triangle(unsigned int n) {
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << "1" << endl;
        }
        else if (i == 2) {
            cout << "1 1" << endl;
        }
        else if (i == 3) {
            cout << "1 2 1" << endl;
            v.push_back(1);
            v.push_back(2);
            v.push_back(1);
        }
        else {
            vector<unsigned int> w;
            cout << "1 ";
            w.push_back(1);
            for (int j = 0; j < i - 2; ++j) {
                cout << v[j] + v[j + 1] << " ";
                w.push_back(v[j] + v[j + 1]);
            }
            cout << "1" << endl;
            w.push_back(1);
            v = w;
            w.clear();
        }
    }
}