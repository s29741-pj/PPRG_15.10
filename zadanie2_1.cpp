#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    int sum = 0;
    int row = 0;
    
    cout << "Podaj wartość 'n': ";
    cin >> n;

    while (i <= n)
    {
        sum += i;
        row += sum;
        i++;
    }
    
    cout << "Szereg dla n = " << n << " wynosi " << row;

    return 0;

}