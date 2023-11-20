#include <iostream>
#include <cmath>
using namespace std;

void polkwadratu()
{
    int a, b;
    cout << "Podaj długość boku kwadratu ";
    cin >> a;
    b = a * a;
    cout << endl;
    cout << "Pole kwadratu wynosi " << b << endl;
}
void poltrojkata()
{
    int a, b, c;
    cout << "Podaj długość boku trójkąta ";
    cin >> a;
    cout << "Podaj długość wysokości trójkąta ";
    cin >> b;
    c = a * b / 2;
    cout << endl;
    cout << "Pole trójkąta wynosi " << c << endl;
}
void polrombu()
{
    int a, b, c;
    cout << "Podaj długość pierwszej przekątnej ";
    cin >> a;
    cout << "Podaj długość drugiej przekątnej ";
    cin >> b;
    c = a * b / 2;
    cout << endl;
    cout << "Pole rombu wynosi " << c << endl;
}
void poltrapezu()
{
    int a, b, c, d;
    cout << "Podaj dlugosc pierwszej podstawy ";
    cin >> a;
    cout << "Podaj dlugosc drugiej podstawy ";
    cin >> b;
    cout << "Podaj dlugość wysokości trapezu ";
    cin >> c;
    d = (a + b) * c / 2;
    cout << endl;
    cout << "Pole trapezu wynosi " << d << endl;
}
void polkola()
{
    int a;
    float b;
    cout << "Podaj promień koła ";
    cin >> a;
    b = a ^ 2 * 3, 14;
    cout << endl;
    cout << "Pole koła wynosi " << b << endl;
}

void obkola()
{
    int a;
    float b;
    cout << "Podaj promień koła ";
    cin >> a;
    b = 2 * 3, 14 * a;
    cout << endl;
    cout << "Obwód koła wynosi " << b << endl;
}
void polrownolegloboku()
{
    int a, b, c;
    cout << "Podaj długość podstawy rownolegloboku ";
    cin >> a;
    cout << "Podaj długość wysokości równoległoboku ";
    cin >> b;
    c = a * b;
    cout << endl;
    cout << "Pole rownolegloboku wynosi " << c << endl;
}

int main()
{
    int wybor;

    while (wybor != 0)
    {   
        
        cout << "1-Pole kwadratu";
        cout << "2-Pole rombu";
        cout << "3-Pole trapezu";
        cout << "4-Pole równoległoboku";
        cout << "5-Pole trójkąta";
        cout << "6-Pole koła";
        cout << "7-Obwód koła";
        cout << "0-Wyjdz";
        cin >> wybor;

        switch (wybor)
        {
        case 1:
            polkwadratu();
            break;

        case 2:
            polrombu();
            break;

        case 3:
            poltrapezu();
            break;

        case 4:
            polrownolegloboku();
            break;

        case 5:
            poltrojkata();
            break;

        case 6:
            polkola();
            break;

        case 7:
            obkola();
            break;
        }
    }
}
