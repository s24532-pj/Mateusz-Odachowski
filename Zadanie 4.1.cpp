#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Podaj rozmiar tablicy: ";
    int n;
    cin >> n;
    vector<int> arr;
    cout << "Podaj elementy tablicy: ";
    int tmp;
    cin >> tmp;
    int ma = tmp;
    for (int i = 1; i < n; ++i) {
        cin >> tmp;
        if (ma < tmp)
            ma = tmp;
        arr.push_back(tmp);
    }
    cout << "Najwiekszy element tablicy to: " << ma << "\n";
}