#include <iostream>

using namespace std;

int main()
{
    // a
    for (int i = 20; i >= 0; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "X";
        }
        cout << "\n";
    }
    // b
    for (int i = 20; i >= 0; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << " ";
        }
        for (int j = 20; j >= i; --j)
        {
            cout << "X";
        }
        cout << "\n";
    }
    cout << "\n";
    // c
    for (int i = 20; i >= 0; --i)
    {
        for (int j = 19; j >= i; --j)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j)
        {
            cout << "X";
        }
        cout << "\n";
    }
    cout << "\n";
    // d
    for (int i = 20; i >= 0; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << " ";
        }
        for (int j = 20; j >= i; --j)
        {
            cout << "X";
        }
        for (int j = 20; j >= i; --j)
        {
            cout << "X";
        }

        cout << "\n";
    }

    return 0;
}