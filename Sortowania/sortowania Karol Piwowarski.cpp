#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void sortowanie_babelkowe(int tab[], int n)
{
  for (int i = 0; i < n; i++)
    for (int j = 1; j < n - i; j++)
      if (tab[j - 1] > tab[j])

        swap(tab[j - 1], tab[j]);
}

void sortowanie_prze_wstawianie(int tab[], int n)
{
  int i, key, j;
  for (i = 1; i < n; i++)
  {
    key = tab[i];
    j = i - 1;

    while (j >= 0 && tab[j] > key)
    {
      tab[j + 1] = tab[j];
      j = j - 1;
    }
    tab[j + 1] = key;
  }
}
void sortowanie_przez_wybieranie(int tab[], int n)
{
  int min_index;
  for (int i = 0; i < n - 1; i++)
  {
    min_index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (tab[j] < tab[min_index])
      {
        min_index = j;
      }
    }
    swap(tab[i], tab[min_index]);
  }
}

void sortowanie_szybkie(int tab[], int left, int right)
{
  if (left >= right)
  {
    return;
  }

  int pivot = tab[(left + right) / 2];

  int i = left;
  int j = right;
  while (i < j)
  {
    while (tab[i] < pivot)
    {
      i++;
    }
    while (tab[j] > pivot)
    {
      j--;
    }
    if (i <= j)
    {
      swap(tab[i], tab[j]);
      i++;
      j--;
    }
  }

  sortowanie_szybkie(tab, left, j);
  sortowanie_szybkie(tab, i, right);
}

void druk_tablicy(int tab[])
{
  for (int i = 0; i < 20; i++)
  {
    cout << tab[i] << " ";
  }
  cout << endl;
}

int main()
{
  srand(time(NULL));

  const int n = 20;

  int tab[n];
  for (int i = 0; i < n; i++)
  {
    tab[i] = rand() % 20 + 1;
  }

  cout << "Tablica nieposortowana: ";
  druk_tablicy(tab);
  cout << endl;

  int wybor = 0;
  cout << "Wybierz rodzaj sortowania:" << endl
       << "1.Babelkowe 2.Wstawianie 3.Wybieranie 4.Szybkie" << endl;
  cin >> wybor;
  switch (wybor)
  {
  case 1:
    sortowanie_babelkowe(tab, n);
    cout << "Tablica posortowana: ";
    druk_tablicy(tab);
    break;

  case 2:
    sortowanie_prze_wstawianie(tab, n);
    cout << "Tablica posortowana: ";
    druk_tablicy(tab);
    break;

  case 3:
    sortowanie_przez_wybieranie(tab, n);
    cout << "Tablica posortowana: ";
    druk_tablicy(tab);
    break;

  case 4:
    sortowanie_szybkie(tab, 0, n - 1);
    cout << "Tablica posortowana: ";
    druk_tablicy(tab);
    break;

  default:
    return 0;
    break;
  }

  return 0;
}