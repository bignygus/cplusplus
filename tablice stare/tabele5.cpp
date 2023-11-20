#include <iostream>
using namespace std;
float a;

int main()
{
    cout << "Podaj rozmiar dysku w GB" << endl;
    cin >> a;
    
    if(a < 0)
    {
        cout << "ERROR" << endl;
        return 0;
    }

    float b = a * 0.9313;

    cout << "Rzeczywisty rozmiar dysku w MB to: " << b << endl;
}