
#include <iostream>
using namespace std;

bool liczba_pierwsza()
{
    int n;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
}

int a;
int n;
int main()
{
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Sprawdzam czy podana liczba jest liczba pierwsza" << endl;
    if (a < 2)
    {
        cout << "Nie jest liczba pierwsza, liczba mniejsza niz 2 nie moze byc liczba pierwsza" << endl;
    }
    if (liczba_pierwsza())
    {
        cout << "Podana liczba jest liczba pierwsza" << endl;
    }
    else
    {
        cout << "Podana liczba nie jest liczbą pierwszą" << endl;
    }
    return 0;
}
