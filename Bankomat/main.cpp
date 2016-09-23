#include <iostream>

using namespace std;
string PIN,pPIN;

int main()
{
    //Poprawny PIN
    pPIN = "1923";

    //Funkcja sprawdzaj¹ca poprawnoœæ pinu
    cout << "Witaj!" << endl << "Wpisz swoj PIN by wyplacic pieniadze: ";
    cin >> PIN;
    if (PIN == pPIN)
    {
        cout << "PIN jest poprawny!" << endl;
    }else{
        cout << "PIN nie jest poprawny!" << endl;
    }
    return 0;
}
