#include <iostream>

using namespace std;
int main()
{

    int a, b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    int l1{a}, l2{b};
    while (a != b)
    {
        if (b > a)
            b -= a;
        else
            a -= b;
    }
    cout << "NDW = " << a << endl;
    cout << "NWW = " << (l1 * l2) / a;

    return 0;
}