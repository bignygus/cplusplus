#include <iostream>

using namespace std;

int main(){

int tablica[5];
    
    srand(time(NULL));
    
    for (int i=0; i<6; i++){
        
        tablica[i] = rand() % 999 + 1;
        cout << tablica[i] << " ";
        
    }
    
    return 0;

}