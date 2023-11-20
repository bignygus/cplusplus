#include <iostream>

using namespace std;

int main()
{
    int l, p;
    cout<<"Podaj liczbę całkowitą: ";
    cin >> l;
    
    while((l%2) == 1 || (l%2) == -1 )
    {
            cout<<"Liczba jest nieparzysta, podaj liczbę jeszcze raz: ";
            cin >> l;
    }
    
    p = l%2;
    if(p==0){
    cout<<"Liczba jest parzysta";
    }
    return 0;
}