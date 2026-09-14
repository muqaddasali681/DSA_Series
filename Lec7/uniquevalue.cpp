#include <iostream>
using namespace std;

int main() {

    // finding unique values in an array
    int arr[] = {2, 5, 14, 3, 2, 5};
    int size = 6;
    int unique[6];
    int uniqueCount = 0;

    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
        
    }
    for(int j = 0; j < uniqueCount; j++) {
            cout << unique[j] << " ";
        }
        cout << endl;


return 0;
}