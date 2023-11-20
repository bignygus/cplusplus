#include<iostream>
#include<cstring>
using namespace std;

void kodowanie(char *napis)
{
	int dl = strlen(napis); 
	
	for(int i=0; i<dl-1; i+=2)
	{
		char pom = napis[i];
		napis[i] = napis[i+1];
		napis[i+1] = pom;	
	}
}

int main()
{
	char napis[100];
	
	cout<<"Podaj napis do zaszyfrowania: ";
	cin.getline(napis, 100);
	
	kodowanie(napis);
	
	cout<<"Szyfrogram: ";
	cout<<napis<<endl;

	return 0;
}