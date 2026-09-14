#include <iostream>
using namespace std;
#define INT_MIN -2147483648
#define INT_MAX 2147483647



int main() {

    //swaping min and max values in an array

    int arr[] = { 5, 9, 2, -3, 0, 7, 3, 8, -1, 40 };
    int size = 10;
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(arr[i]  < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }    
    }
    cout << min << " " << max << endl;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == min) {
            arr[i] = max;
        } else if (arr[i] == max) {
            arr[i] = min;
        }
        cout << arr[i] << " ";
    }
    
    cout << endl;

    return 0;
}