#include <iostream>
using namespace std;

// Function definition for printing "Hello World"
// int printHello() {
//     cout << "Hello World" << endl;
//     return 3;
// }
 double sum (double a, double b) {
    double s = a + b;
    return s;
 }

 //minimum of two numbers
 int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
    }
 //sum of numbers from 1 to n
 int sum(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;

 }
 // factorial fom 1 to n
 int factorial(int n) {
    int fact = 1;

    for (int i =1; i<=n; i++) {
        fact *= i;
    }
    return fact;
 }

// This is the starting point of the program.
int main() {
    cout << sum(10, 5) << endl;
    cout << min(5,9) << endl;
    cout << sum(10) << endl;
    cout << factorial(6) << endl;

return 0;
}