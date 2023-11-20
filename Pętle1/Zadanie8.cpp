#include <iostream>
using namespace std;

int a;
int main()
{
    cout << "Wielkosc planszy: ";
    cin >> a;
    cout << "X: " << a << endl
         << "  ";
    for (int i = 0; i < a; i++)
    {
        cout << (char)(65 + i);
    }
    cout << endl;
    for (int i = 0; i < a; i++)
    {
        if (i < 10)
        {
            cout << " ";
        }
        cout << i;
        for (int j = 0; j < a; j++)
        {
            cout << (char)(254);
        }
        cout << endl;
    }

    return 0;
}
