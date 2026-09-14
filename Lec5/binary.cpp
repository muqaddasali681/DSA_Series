#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int answer = 0, power =1;
    
    while (decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

        answer += (rem * power);
        power *= 10;
    }
    return answer;
}

int binaryToDec(int binaryNum) {
    int ans = 0, power = 1;

    while(binaryNum > 0) {
        int rem = binaryNum % 10;
        

        ans += (rem * power);
        binaryNum /= 10;
        power *= 2;
    }
    return ans;
}

int main() {

    int decNum = 70;
    int binaryNum = 1000010;
    cout << decToBinary(decNum) << endl;
    cout << binaryToDec(binaryNum) << endl;

    for (int i = 1; i <= 10; i++) {
        cout << decToBinary(i) << endl;
    }


    return 0;
}