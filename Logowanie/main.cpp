#include <iostream>

using namespace std;
string login, haslo,plogin, phaslo;

int main()
{
    //Konfiguracja
    plogin = "login";
    phaslo = "haslo";

    //skrypt
    cout << "Witaj w systemie logowania!" << endl;
    cout << "Login: ";
    cin >> login;
    cout << "Haslo: ";
    cin >> haslo;

    if ((login == plogin)&&(haslo == phaslo))
    {
        cout << "Zalogowales sie!" << endl;
    }else{
        cout << "Wprowadziles niepoprawne dane!" << endl;
    }
    return 0;
}
