#include <iostream>
#include <string>
using namespace std;

string tabela6[10][10];

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabela6[i][j] = "~";
        }
    }
    cout << "maszt statku X, pole statek zatopiony/trafiony Y, krawędzie planszy _, woda ~" << endl;
    tabela6[2][3] = "X";
    tabela6[2][4] = "X";
    tabela6[2][5] = "X";

    tabela6[4][3] = "Y";
    tabela6[4][4] = "Y";
    tabela6[4][5] = "Y";

    tabela6[2][8] = "X";
    tabela6[2][9] = "X";

    tabela6[5][7] = "Y";
    tabela6[6][7] = "Y";

    tabela6[9][9] = "X";
    tabela6[8][9] = "Y";

    tabela6[5][6] = "Z";

    for (int i = 0; i < 10; i++)
    {
        tabela6[0][i] = "_";
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << tabela6[i][j];
        }
        cout << endl;
    }
}