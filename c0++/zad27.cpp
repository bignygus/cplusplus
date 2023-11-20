#include <iostream>
#include <string>

using namespace std;

bool szukaj( string & tekst, string wyraz1, string wyraz2 )
{
    size_t z = tekst.find( wyraz1 );
    size_t z1 = tekst.find( wyraz2 );
    int i = 0;
   
    if(( z != string::npos ) &&( z1 != string::npos ) )
    {
        return true;
    }
    else return false;
    return false;
}

void wypiszWynik( bool czyZnaleziono )
{
    if( czyZnaleziono )
         cout << "Znaleziono" << endl;
    else
         cout << "Nie znaleziono" << endl;
   
}

int main()
{
    string napis = "Zadanie domowe z kursu C++ (http://cpp0x.pl) - najlepszy kurs C++ w Internecie!";
    wypiszWynik( szukaj( napis, "ada", "kurs" ) );
    wypiszWynik( szukaj( napis, "ada", "taki" ) );
    wypiszWynik( szukaj( napis, "C++", "cpp0x" ) );
    wypiszWynik( szukaj( napis, "C#", "cpp0x" ) );
    return 0;

}