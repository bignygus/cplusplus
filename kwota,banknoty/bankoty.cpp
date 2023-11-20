#include <iostream>

using namespace std;

void wydaj_reszte(float kwota, double banknoty[], float liczby_banknotów[]) {
    int i = 0;
    while (kwota > 0.01) {
        while (kwota >= banknoty[i]) {
            kwota -= banknoty[i];
            liczby_banknotów[i]++;
        }
        i++;
    }

    cout << "Wydano banknoty:" << endl;
    for (int i = 0; i < 14; i++) {
        if (liczby_banknotów[i] > 0) {
            cout << banknoty[i] << " zł x " << liczby_banknotów[i] << endl;
        }
    }
}

int main() {
    float kwota;
    cout << "Podaj kwotę: ";
    cin >> kwota;

    double banknoty[14] = {200, 100, 50, 20, 10, 5, 2, 1, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01}; // lista dostępnych banknotów
    float liczby_banknotów[14] = {0}; // tablica przechowująca ilości banknotów do wydania

    wydaj_reszte(kwota, banknoty, liczby_banknotów);

    return 0;
}
