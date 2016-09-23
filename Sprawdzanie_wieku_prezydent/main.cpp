#include <iostream>

using namespace std;
int wiek;

int main()
{
    cout << "Wpisz swoj wiek a dowiesz sie czy jestes pelnoletni i czy mozesz startowac na prezydenta." << endl;
    cout << "Twoj wiek: ";
    cin >> wiek;

    if (wiek < 18)
    {
        cout << "Jestes niepelnoletni i nie mozesz startowac na prezydenta.";
    }else if ((wiek >= 18)&&(wiek < 35))
    {
        cout << "Jestes pelnoletni ale nie mozesz startowac na prezydenta.";
    }else{
        cout << "Jestes pelnoletni i mozesz startowac na prezydenta";
    }
    return 0;
}
