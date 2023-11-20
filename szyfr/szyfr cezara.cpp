#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    int klucz;
    cout << "Podaj tekst od zaszyfrowania (Napisz dużymi literami)" << endl;
    cin >> text;
    cout << "Podaj klicz od (od 0 do 26)" << endl;
    cin >> klucz;
    
    klucz = klucz % 26; // sprawdza czy klucz ma od 0 do 26
    
    for (int i = 0; i < text.length(); i++) {
        if (text[i] != ' ') {
            if (text[i] + klucz > 'Z') {
                text[i] = text[i] + klucz - 26;
            } else {
                text[i] = text[i] + klucz;
            }
        }
    }
    cout << text;
    
    return 0;
}
