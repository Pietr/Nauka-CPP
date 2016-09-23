#include <iostream>

using namespace std;
int liczba[3];

int main()
{
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba[0];
    cout << "Podaj druga liczbe: ";
    cin >> liczba[1];
    cout << "Podaj trzecia liczbe: ";
    cin >> liczba[2];

    if( liczba[0] > liczba[1] )
    {
        if( liczba[0] > liczba[2] )
        {
            cout << endl << "Najwieksza liczba jest: " << liczba[0] << endl;
        }else{
            cout << endl << "Najwieksza liczba jest: " << liczba[2] << endl;
        }
    }else{
        if( liczba[1] > liczba[2] )
        {
            cout << endl << "Najwieksza liczba jest: " << liczba[1] << endl;
        }else{
            cout << endl << "Najwieksza liczba jest: " << liczba[2] << endl;
        }
    }
    return 0;
}
