#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

// Kompilator: CodeBlocks
// System: Windows 7

int main()
{

///////////////////////// ALGORYTM LOSOWANIA BEZ POWTORZEN //////////////////////
srand(time(NULL));

    int ile_pytan = 20; //z ilu pytan losujemy?
    int ile_wylosowac = 5; //ile pytan wylosowac?
    int ile_juz_wylosowano=0; //zmienna pomocnicza
    int *wylosowane = new int[ile_wylosowac+1]; //rezerwacja tablicy
    bool losowanie_ok;

    for (int i=1; i<=ile_wylosowac; i++)
    {
		do
		{
            int liczba=rand()%ile_pytan+1; //losowanie w C++
            losowanie_ok=true;

			for (int j=1; j<=ile_juz_wylosowano; j++)
			{
				//czy liczba nie zostala juz wczesniej wylosowana?
				if (liczba==wylosowane[j]) losowanie_ok=false;
			}

			if (losowanie_ok==true)
			{
				//mamy unikatowa liczbe, zapiszmy ja do tablicy
				ile_juz_wylosowano++;
				wylosowane[ile_juz_wylosowano]=liczba;
			}
		} while(losowanie_ok!=true);
    }

///////////////////////// ZOBACZ REZULTATY LOSOWANIA //////////////////////

	cout<<"Wylosowane numery: ";
    for (int i=1; i<=ile_wylosowac; i++)
    {
		cout<<wylosowane[i]<<" ";
	}


    return 0;
}
