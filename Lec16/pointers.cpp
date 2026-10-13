#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;
    int** ptr1 = NULL;    


    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << ptr2 << endl;
    cout << *(&a) << endl;
    cout << *ptr << endl;
    cout << ptr1 << endl;

    int b = 2;
    int* p = &b;
    int** q = &p;

    cout << *p << endl;
    cout << **q << endl;
    cout << p << endl;
    cout << *q << endl;

    return 0;
}