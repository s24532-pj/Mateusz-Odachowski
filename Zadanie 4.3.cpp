#include <iostream>
#include <array>

using namespace std;

int main() {
    array<array<int, 10>, 10> arr;
    for (int i = 0; i < 10; ++i) {
        arr[i][0] = i;
        arr[i][1] = i + i;
        arr[i][2] = i * i;
        arr[i][3] = 5 + i;
        arr[i][4] = i - 5;
        for (int j = 0; j < 5; ++j)
            arr[i][j + 5] = 0;
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << arr[i][j] << ", ";
        }
        cout << "\n";
    }
    return 0;
}