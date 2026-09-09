// Practice during the Lecture: Conditional Statements and Loops
#include <iostream>
using namespace std;

int main() {
 // To check whether the number is negative or positive
    int n = -45;

    if (n >= 0) {
        cout << "n is a positive number.\n";
    } else {
        cout << "n is a negative number.\n";
    }


// To check if a person is eligible to vote or not
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are eligible to vote.\n";
    } else { 
        cout << "You are not eligible to vote.\n";
    }


// To check if a number is even or odd
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0 ) {
        cout << num << " is an even number.\n";
        cout << "This is going to be crazy.\n";
    } else { 
        cout << num << " is an odd number.\n";
    }


    // To check the grade of a student based on marks
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "You got an A grade.\n";
        cout << "Kudos to you.\n";
    } else if (marks >= 80) {
        cout << "You got a B grade.\n";
        cout << " Make it to the A grade next time.\n";
    } else if (marks >= 70) {
        cout << "You got a C grade.\n";
        cout << "You didn't compete, I think that's why fall in C sea.\n";
    } else if (marks >= 60) {
        cout << "You got a D grade.\n";
        cout << " 'Better Luck Next Time' Do you think I am gonna say that? No way, Better Luck happens if you also do Better Hardwork so 'Better Hardwork Next Time rather than Better Sleep'\n"; 
    } else {
        cout << "You got an F grade.\n";
        cout << "What do you think? Like you are gonna pass while eating Noodles and Watching Kung Fu? Like Seriously and sleeping without any worries. That's not gonna happen next time. Mind it. You have to work smarter child. \n";
    }

    // To check if a character is in lowercase or uppercase

    char ch;
    cout << "Enter a Character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is in lowercase.";
    } else if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is in uppercase.";
    } else {
        cout << ch << " is not an alphabet.";
    }

    // to check if an alphabet is in lowercase or uppercase using ASCII values

    // char alphabet;
    // cout << "Enter an alphabet: ";
    // cin >> alphabet;
    // if (alphabet >= 65 && alphabet <=90) {
    //  cout << alphabet << " is an uppercase alphabet.";
    // } else if (alphabet >= 97 && alphabet <= 122) {
    //  cout << alphabet << " is a lowercase alphabet.";
    // } else {
    //  cout << alphabet << " is not an alphabet.";
    // }

    // //  Ternary Statement
    // int a;
    // cout << "Enter a number: ";
    // cin >> a;
    // (a >=0) ? cout << a << " is a positive number.\n" : cout << a << " is a negative number.\n";

    // // while loop
    // int n = 20;
    // int i = 1;
    // while (i <= n) {
    //     cout << i << " ";
    //     i++;
    // }
    // // for loop
    // int n = 30;

    // for (int i = 1; i <= n; i+=2) {
    //     cout << i << " ";
    // }

    // // for loop to calculate the sum of numbers from 1 to n

    // int n = 50;
    // int sum = 0;
    // for (int i = 1; i <= n; i++) {
    //     sum += i;
    //     if (i == 5)
    //     {
    //         break;
    //     }   
    // }

    // cout << "Sum : " << sum << endl;

    // // for loop to calculate the sum of odd numbers from 1 to n
    // int n = 50;
    // int oddSum = 0;
    // for (int i = 1; i <= n; i++) {
    //     if (i % 2 != 0) {
    //         oddSum += i;
    //     }
    // }
    
    //    cout << " Odd Sum = " << oddSum << endl;

    // //while loop to calculate the sum of odd numbers from 1 to n
    // int n = 5;
    // int oddSum = 0;
    // int i = 1;
    // while (i <= n) {
    //     if (i % 2 != 0) {
    //         oddSum += i;
    //     }
    //     i++;
    // }

    // // while loop to calculate the sum of even numbers from 1 to n
    // // cout << " Odd Sum = " << oddSum << endl;
    // int n = 6;
    // int evenSum = 0;
    // int i = 1;
    // while (i <= n) {
    //     if (i % 2 == 0) {
    //         evenSum += i;
    //     }
    //     i++;
    // }
    // cout << " Even Sum = " << evenSum << endl;

    // int n = 8;
    // int evenSum = 0;
    
    
    // for (int i=1 ; i<=n ; i++) {
    //     if (i % 2 == 0) {
    //         evenSum += i;
    //     }
    // } 

    // cout << " Even Sum = " << evenSum << endl;

    // // do while loop
    // do
    // {
    //     cout << " hello world\n";
    // } while (3 > 5);

    // int n = 10;
    // int i = 1;
    // do {
    //     cout << i << " ";
    //     i++;

    // } while (i <= n);

    // int n = 4;
    // for (int i=1; i <= n; i++) {
    //     int m = 10;
    //     for (int j = 1; j <= m; j++) {
            
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    return 0;

    
}
    
   
    
    
