#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "zad1" << endl;
    int tabela[100];

    for (int i = 0; i < 100; i++)
    {
        tabela[i] = i;
        cout << tabela[i] << " " << endl;
    }

    cout << endl;

    cout << "zad2" << endl;
    double tabela2[10];

    for (int i = 0; i < 10; i++)
    {
        tabela2[i] = i;
        cout << tabela2[i] << " " << endl;
    }

    cout << "zad3" << endl;
    string tabela3[15] = {"N", "a", "p", "i", "s", " ", "w", " ", "t", "a", "b", "l", "i", "c", "y"};

    for (int i = 0; i < 15; i++)
    {
        cout << tabela3[i] << " ";
    }
    cout << endl;
    cout << "zad4" << endl;
    string tabela4[26];
    for (int i = 0; i < 26; i++)
    {
        tabela4[i] = (char)i + 65;
        cout << tabela4[i] << " " << endl;
    }

    cout << "zad5" << endl;
    int tabela5[5];

    for (int i = 0; i < 5; i++)
    {
        tabela5[i] = i + 7;
        cout << hex << tabela5[i] << " ";
    }
    cout << endl;
    cout << "zad6" << endl;
    string Odpowiedzi[50];

    for (int i = 0; i < 50; i++)
    {
        switch (i % 5)
        {
        case 0:
            Odpowiedzi[i] = "a";
            break;
        case 1:
            Odpowiedzi[i] = "b";
            break;
        case 2:
            Odpowiedzi[i] = "c";
            break;
        case 3:
            Odpowiedzi[i] = "d";
            break;
        case 4:
            Odpowiedzi[i] = "e";
            break;
        }
        cout << Odpowiedzi[i] << endl;
    }

    cout << "zad7" << endl;

    int tabela6[2] = {5577, 554};
    cout << tabela6[0] << ", " << tabela6[1] << endl;

    cout << "zad8 niewiem jak zrobić" << endl;
}