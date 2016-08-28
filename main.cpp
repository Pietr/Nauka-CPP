#include <iostream>

using namespace std;
int uczniowie, cukierki, cnaucznia, reszta;

int main()
{
    cout << "Witaj w pierwszym programie!" << endl << "Program wykonany w celu realizacji pierwszego zadania." << endl;
    cout << "-------------------------" << endl << endl;
    cout << "Podaj ilosc uczniow: ";
    cin >> uczniowie;
    cout << "Podaj ilosc cukierkow: ";
    cin >> cukierki;
    cnaucznia = cukierki/(uczniowie-1);
    cout << endl << "Cukierkow na ucznia: " << cnaucznia << endl;
    reszta = cukierki-cnaucznia*(uczniowie-1);
    cout << "Cukierkow dla jubilata: 0" << reszta << endl << endl;

    cout << " ------------------------" << endl;
    cout << "| Program wynonal: Pietr |" << endl;
    cout << " ------------------------" << endl;
    return 0;
}
