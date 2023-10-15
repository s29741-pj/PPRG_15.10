#include <iostream>
#include <string>
using namespace std;

// ? Do sprawdzenia zadania wystarczy odkomentwować fragment znajdujący się pod komentarzem //*<podpunkt>

int main() {

    int a = 0;
    int b = 0;
    string str = "*";


    //* A
    cout << "Liczba a: " << endl;
    cin >> a;
    // cout << "Liczba b: " << endl;
    // cin >> b;
    
    //* B
    // for(int i = 1; i <= a; i++){
    //     cout << "*";
    // }

    //* C
    // for(int i = 1; i <= b; i++){
    //     cout << "*" << endl;
    // }

    //* D
    // for(int i = 0; i < a; i++){
    //     cout << endl;
    //     for(int j = 0; j < b; j++){
    //         cout << "*";
    //     }
    // }

    //* E
    // for(int i = 0; i < a; i++){
    //     cout << endl;
    //     for(int j = 0; j < b; j++){
    //         if(i == 0 || i == a - 1) {
    //             cout << "*";
    //         }
    //         else if(j == 0 || j == b - 1) {
    //             cout << "*";
    //         }
    //         else {
    //             cout << " ";
    //         }
    //     }
    // }

    //* F
    
    // for(int i = 0; i < a; i++){
    //     cout << endl;   
    //     int blank = a - (a - i) + 1;

    //     for(int j = 0; j < a; j++ ){
    //         if(j < blank) {
    //             cout << "*";
    //         }
    //     }
    // }

    //* G
    // for(int i = 0; i < a; i++){
    //     cout << endl;   
    //     int blank = a - (a - i);

    //     for(int j = 0; j < a; j++ ){
    //         if((j >= blank) || (blank == 0)) {
    //             cout << "*";
    //         }else {
    //             cout << " ";
    //         }
    //     }
    // }

    
    return 0;
}