#include <iostream>

using namespace std;

int B[9]={500,200,100,50,20,10,5,2,1};
int K[9];
int main()
{
    int R;
    cout << "Podaj Liczbe z ktorej mam wydać reszte?:";
    cin >> R;
    int i=0;
    while (R>0)
    {
        K[i] = R / B[i];
        R = R % B[i];
        i++;
    }
    for (int i=0;i < 9; i++)
    {
        cout << B[i]<< " x " << K[i] << endl;
    }
     
    return 0;   
}