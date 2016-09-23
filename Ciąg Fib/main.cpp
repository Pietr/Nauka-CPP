#include <iostream>
#include <windows.h>

using namespace std;
int liczby;
long long a=0,b=1;

//konfiguracja
int wypisz = 1; //0 - wypisuje ostatnia liczbe, 1 - wypisuje caly ciag,

int main()
{
    cout << "Ile liczb mam wypisac: ";
    cin >> liczby;

    for(int i=0; i<liczby; i++)
    {
        b += a;
        a = b-a;
        if(wypisz)
            cout << b << " ";
    }
    if (!wypisz)
        cout << b;

    cout << endl << endl;
    system("pause");
    return 0;
}
