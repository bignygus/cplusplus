#include <iostream>

using namespace std;

int main(){
    
    int tab[5];
    
    srand(time(NULL));
    cout << "LOTTO" << endl;
    
    for (int i=0; i<6; i++){
        
        tab[i] = rand() % 49 + 1;
        cout << tab[i] << " ";
        
    }
    
    return 0;
}