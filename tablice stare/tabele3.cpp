#include <iostream>
#include <string>
using namespace std;

string TAB1[12] = {"Z", "w", "y", "k", "l", "y", " ", "n", "a", "p", "i", "s"};
string TAB2[5] = {"\"", "Nie chciec to gorzej niz nie moc", "\" ", " - ", "anonim"};
string TAB3[6] = {"U", "W", "A", "G", "A", "!"};
string TAB4[8] = {"Z ", "A ", "D ", "A ", "N ", "I ", "E ", " V"};
string TAB5[1] = {" "};

int main()
{
    for (int i = 0; i < 12; i++)
    {
        cout << TAB1[i];
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << TAB2[i];
    }
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << TAB3[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << TAB4[i];
    }
    cout << endl;
    cout << TAB5[1] << endl;
}