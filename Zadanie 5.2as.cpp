#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int temp, elementy;
    cout << "Podaj wielkosc tablicy: ";
    cin >> elementy;
    int* tablica;
    tablica = new int[elementy];
    for (int i = 0; i < elementy; i++)
    {
        cout << "Podaj " << i + 1 << " element tablicy" << endl;
        cin >> temp;
        tablica[i] = temp;
    }

    cout << std::endl;


    cout << "Tablica wejsciowa: \n\n\n";
    for (int i = 0; i < elementy - 1; i += 2)
    {
        cout << tablica[i] << "\t" << tablica[i + 1] << endl;
    }
    if (elementy % 2 != 0)
    {
        cout << tablica[elementy - 1] << endl;
    }

    cout << "tablica wyjsciowa: \n\n\n";

    for (int i = 0; i < elementy - 1; i += 2)
    {
        cout << tablica[i + 1] << "\t" << tablica[i] << endl;
    }
    if (elementy % 2 != 0)
    {
        cout << "\t" << tablica[elementy - 1] << endl;
    }


    return 0;
}