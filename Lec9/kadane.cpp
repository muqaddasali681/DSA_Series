#include <iostream>
#include <vector>
#define INT_MIN -2147483648
using namespace std;

int main() {

    int n = 5;
    int arr[5] = { 1, 2, 3, 4, 5 };
    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++) {
        int currSum = 0;
        for (int en = st; en < n; en++) {
            currSum += arr[en];
            maxSum = max(maxSum, currSum);
            
        }
        
    }

    cout << " maximum Subarray sum is: " << maxSum << endl;



    return 0;
}