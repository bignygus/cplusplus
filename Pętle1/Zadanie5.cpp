#include <iostream>
using namespace std;

int a = 0;
int main()
{
    for(a = 0; a < 15; a++)
    {
        if(a > 5)
    {
        break;
    }
    else
    {
        continue;
    }
    }    
    system("pause");
    return 0;
}