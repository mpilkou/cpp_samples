#include <iostream>
using namespace std;
 
int main () {
   // an array with 5 rows and 2 columns.
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
 
   // output each array element's value                      
   for ( int i = 0; i < 5; i++ )
      for ( int j = 0; j < 2; j++ ) {
      
         cout << "a[" << i << "][" << j << "]: ";
         cout << a[i][j]<< endl;
      }

    // pointer
    // an array with 5 elements.
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;

    p = balance;

    // output each array element's value 
    cout << "Array values using pointer " << endl;

    for ( int i = 0; i < 5; i++ ) {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    cout << "Array values using balance as address " << endl;

    for ( int i = 0; i < 5; i++ ) {
        cout << "*(balance + " << i << ") : ";
        cout << *(balance + i) << endl;
    }

   return 0;
}