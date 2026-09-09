#include <iostream>
using namespace std;

// This is the starting point of the program.
int main() {
    
    int a, b;

    cout << "Enter a : " ;
    cin >> a;

    cout << "Enter b : " ;
    cin >> b;

    int sum = a + b;
    int product = a * b;
    int difference = a - b;
    int quotient = a / b;
    int remainder = a % b;

    cout << "Sum : " << sum << endl;
    cout << "Product : " << product << endl;
    cout << "Difference : " << difference << endl;
    cout << "Quotient : " << quotient << endl;
    cout << "Remainder : " << remainder << endl;

    return 0;
}
// this is a comment
