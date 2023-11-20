#include <iostream>
using namespace std;

int main()
{
    cout << "liczby nieparzyste z przedzialu od 1 do 100 to: " << endl;
    for(int i=1; i <= 100; i++)
     {
            if(i % 2 != 0)
            {
                cout << i << endl;
            }
     }
     cout << "liczby podzielne przez 5 z przedzialu od 1 do 50 to: " << endl;
    for(int i=5; i <= 50; i++)
     {
            if(i % 5 == 0)
            {
                cout << i << endl;
            }
     }
    int suma = 0;
    int tablica_suma[] = {5,2,4,6,1,0,-20,10,20};
    for(int i=0; i < 9; i++)
    {
        suma += tablica_suma[i];
    }
    cout << suma << endl;
    
    for (int i=33; i<256; i++){
    cout.width(4);
    cout  << (char) (i);
    cout.width(4);
    cout << i;
    if (i % 8 == 0) cout << endl;
    }
}

// Jan Saternus i Jan Duźniak 2aTI