#include <iostream>
using namespace std;

int main() {
    int n = 5; // Example size
    
    //Square Pattern (A B C ..)
    

    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n; j++) {
            cout << ch << " "; 
            ch = ch+1;
        }
        cout << endl;
    }

    // // Square Pattern (1 2 3 ..)
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // // Increasing Square Pattern (1 2 3 ..)
    // int num =1;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
        
    // }
    // cout << "num: " << num << endl;

    // //Increasing Alphabet Square Pattern (A B C ..)
    // char ch = 'A';
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++) {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // cout << "value in ch: " << ch << endl;

    // // Triangle pattern
    
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i+1; j++) {
    //         cout << "* " ;
    //     }
    //     cout << endl;
        
    // }

    // // triangle pattern (1 2 3 ..)
    
    // for (int i = 0; i<n; i++) {
    //     for (int j = 0; j <i+1; j++) {
    //         cout << (i+1) << " ";
    //     }
    //     cout << endl;
    // }

    // //ALphabetical triangle pattern
    
    
    // for (int i = 0; i < n; i++) {
    //     char ch = 'A' +i;
    //     for (int j = 0; j < i+1; j++) {
    //         cout <<(ch) << " ";
            
    //     }
    //     cout << endl;
    // }

    // //alphabetical triangle pattern (A  /BB / CCC ..)
    
  
    // for (int i = 0; i < n; i++) {
    //     char ch = 'A' + i-1;
    //     for (int j = 0; j < i; j++) {
    //         cout << ch << " ";
            
    //     }
    //     cout << endl;
    // }

    // //triangle

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i+1; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    
    // // Alphabetical triangle
    // for (int i = 0; i < n; i++) {
    //     char ch ='A' ;
        
    //     for (int j = 0; j < i+1; j++) {
            
    //         cout << ch << " ";
    //         ch++;
            
    //     }
    //     cout << endl;
    // }

    // // Reverse triangle

    // for (int i=0; i<n; i++) {
    //     for (int j = i+1; j>0; j--) {
    //     cout << j << " ";
    //     }
    //     cout << endl;
    // }
    

    // // Reverse alphabetical triangle

    
    // for (int i =0; i<n; i++) {
    //     char ch = 'A' + i;
        
    //     for (int j=i+1; j>0; j--) {
            
    //         cout << ch << " ";
    //         ch--;
            
            
    //     }
    //     cout << endl;
    // }
    // //floyd triangle pattern
    // int n = 5;
    // int num = 1;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j<i+1; j++) {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }


    // //inverted alpha and numeric pattern
    // for (int i=0; i<n; i++) {
    //     //spaces
    //     for (int j=0; j < i; j++) {
    //         cout << " ";
    //     }
    //     char ch = 'A' + i;
    //     //numbers
    //     for (int j = 0; j< n-i; j++) {
    //         cout << (ch) ;
            
    //     }

    //     cout << endl;
    // }

    // //pyramid pattern
    // for (int i = 0; i<n; i++)  {
    //     //spaces
    //     for (int j = 0; j<n-i-1; j++) {
    //         cout << " ";
    //     }

    //     //numbers
    //     for (int j = 1; j<=i+1; j++) {
    //         cout << j ;
    //     }
    //     //numbers
    //     for (int j=i; j >=1; j--) {
    //         cout << j ;
    //     }
    //     cout << endl;
    // }

    // // Hollow Diamond
    // int n = 8;
    // for (int i=0; i<n; i++) {

    //     //top part of diamond
    //     //spaces

    //     for (int j = 0; j < n-i-1; j++ ) {
    //         cout << " ";
    //     }
        
    //     cout << "*";
        

    //     //spaces
    //     if (i!=0) {
    //     for (int j=0; j<2*i-1; j++) {
    //         cout << " ";
    //     }
    //     cout << "*";
    // }
    //     //stars
        

    //     cout << endl;
    // }
    // for (int i = n-1; i>0; i--) {
    //     for (int j =0; j<n-i; j++) {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if (i!=1){
    //         for (int j=0; j<2*i-3; j++) {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // //Butterfly Pattern
    // int n = 3;
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<i+1; j++) {
    //         cout << "*" ;
    //     }

    //     for (int j=0; j<2*(n-i-1); j++) {
    //         cout << " ";
    //     }
    //     for (int j=0; j<i+1; j++) {
    //         cout << "*" ;
    //     }
    //     cout << endl;
    // }
    // for (int i=0; i<n; i++) {
    //     for (int j=n-i; j>0; j--) {
    //         cout << "*" ;
    //     }
    //     for(int j=0; j<2*i; j++) {
    //         cout << " ";
    //     }
    //     for (int j=n-i; j>0; j--) {
    //         cout << "*" ;
    //     }

    //     cout << endl;
    // }



    return 0;
}
    


      
           