#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    cout << "Podaj rozmiar tablicy: ";
    int n;
    cin >> n;
    vector<pair<int, int>> arr;
    cout << "Podaj elementy tablicy: ";
    int tmp;
    bool exist = false;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        for (auto& j : arr) {
            if (j.first == tmp) {
                j.second++;
                exist = true;
            }
        }
        if (!exist) {
            arr.push_back(make_pair(tmp, 1));
        }
    }
    int ma = 0, in = arr[0].second;
    for (auto const& i : arr) {
        if (i.second > ma) {
            in = i.first;
            ma = i.second;
        }
    }
    cout << "Najwiecej wystapien w tablicy ma liczba: " << in << "\n";
}