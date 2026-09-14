#include <iostream>
using namespace std;

int main() {

    // intersection of two arrays
    int arr1[] = { 8, 1, 2, 3, 4, 5 };
    int arr2[] = { 4, 5, 6, 7, 8 };
    int size1 = 6;
    int size2 = 5;
    int intersection[6];
    int intersectionCount = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                intersection[intersectionCount] = arr1[i];
                intersectionCount ++;
                break;
            }
        }
    }
    for (int i = 0; i < intersectionCount; i++) {
        cout << intersection[i] << " ";
    }
    cout << endl;

    
    return 0;
}