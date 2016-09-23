#include <iostream>

using namespace std;
int ocen;
float suma, iloraz;

int main()
{
    cout << "Zaraz wylicze twoja srednia!" << endl;
    cout << "Z ilu ocen chcesz wyliczyc srednia: ";
    cin >> ocen;
    cout << "Podaj swoje oceny." << endl;
    float ocena[ocen];

    for (int i=0; i<ocen; i++)
    {
        cout << "Ocena " << i+1 << ": ";
        cin >> ocena[i];
        suma += ocena[i];
    }
    iloraz = suma/ocen;
    cout << "Twoja srednia: " << iloraz;
    return 0;
}
