#include <iostream>
#include <vector>

int main()
{
    int DlugoscWektora;
    int najwieksza;
    int zapisany_indeks;
    int temp;
    std::vector<int> JakisWektor;
    std::cout << "Podaj liczbe elementow wektrora" << std::endl;
    std::cin >> DlugoscWektora;

    for (int i = 0; i < DlugoscWektora; i++)
    {
        std::cout << "Podaj " << i + 1 << " element wektora" << std::endl;
        std::cin >> temp;
        JakisWektor.push_back(temp);
    }

    najwieksza = JakisWektor[0];
    for (int i = 1; i < DlugoscWektora; i++)
    {
        if (najwieksza < JakisWektor[i])
        {
            najwieksza = JakisWektor[i];
            zapisany_indeks = i;
        }

    }

    std::cout << "Najwieksza liczba z wektora to: " << JakisWektor[zapisany_indeks] << std::endl;
    std::cout << "Indeks tej liczby w wektorze to: " << zapisany_indeks << std::endl;

    return 0;
}