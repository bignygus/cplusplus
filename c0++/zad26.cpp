#include <iostream>
#include <string>

using namespace std;

void in(string & imie, string & nazwisko, int & wiek)
{
    bool imiet, nazt, wiekt;
    cout << "Podaj imie: ";
    cin >> imie;
    imiet = cin.good();

    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    nazt = cin.good();

    cout << "Podaj wiek: ";
    cin >> wiek;
    wiekt = cin.good();
    if (imiet, nazt, wiekt == false)
        do{
            cin.clear();
            cin.sync();
            cout << "Blad, wypisz  ponownie , imie, nazwisko, wiek: ";

            cin >> imie >> nazwisko >> wiek;
            imiet, nazt, wiekt = cin.good();

        }while (imiet, nazt, wiekt == false);
}

void out(string imie, string nazwisko, int wiek)

{
    cout << imie << " " << nazwisko << " " << wiek << endl;
    
}

int main()

{
    string imie[2];
    string nazwisko[2];
    int wiek[2];
    for (int i = 0; i < 2; i++)
        in(imie[i], nazwisko[i], wiek[i]);

    for (int i = 0; i < 2; i++)
        out(imie[i], nazwisko[i], wiek[i]);

    return 0;
}