#include <iostream>
using namespace std;

int main() {

    int month = 0;

    cout << "Podaj liczbę od 1 do 12 odpowiadającą wybranemu miesiącowi: " << endl;
    cin >> month;

    if(month >= 1 || month <= 12) {
        switch(month) {
            case 1:
                cout << "miesiąc: Styczen" << endl << "Liczba dni: 31"  << endl << "pogoda : Pochmurno";
                break;
            case 2:
                cout << "miesiąc: Luty" << endl << "Liczba dni: 28"  << endl << "pogoda : Pochmurno";
                break;
            case 3:
                cout << "miesiąc: Marzec" << endl << "Liczba dni: 31"  << endl << "pogoda : Pochmurno";
                break;
            case 4:
                cout << "miesiąc: Kwiecien" << endl << "Liczba dni: 30"  << endl << "pogoda : Słonecznie";
                break;
            case 5:
                cout << "miesiąc: Maj" << endl << "Liczba dni: 31"  << endl << "pogoda : Słonecznie";
                break;
            case 6:
                cout << "miesiąc: Czerwiec" << endl << "Liczba dni: 30"  << endl << "pogoda : Słonecznie";
                break;
            case 7:
                cout << "miesiąc: Lipiec" << endl << "Liczba dni: 31"  << endl << "pogoda : Słonecznie";
                break;
            case 8:
                cout << "miesiąc: Sierpien" << endl << "Liczba dni: 31"  << endl << "pogoda : Słonecznie";
                break;
            case 9:
                cout << "miesiąc: Wrzesien" << endl << "Liczba dni: 30"  << endl << "pogoda : Słonecznie";
                break;
            case 10:
                cout << "miesiąc: Pazdziernik" << endl << "Liczba dni: 31"  << endl << "pogoda : Pochmurno";
                break;
            case 11:
                cout << "miesiąc: Listopad" << endl << "Liczba dni: 30"  << endl << "pogoda : Pochmurno";
                break;
            case 12:
                cout << "miesiąc: Grudzien" << endl << "Liczba dni: 31"  << endl << "pogoda : Pochmurno";
                break;
            default:
                cout << "Wybrana liczba jest spoza zakresu.";
        }

        return 0;
    }    
}