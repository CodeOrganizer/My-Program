#include <iostream>
//#include <stdio.h>
using namespace std;
int main()
{   
     /* int A[10]={5,8,7,6,};
    cout<<sizeof(A)<<endl;
    cout<<A[3]<<endl;
    printf("%d\n",A[9]); */
    
        int n;
        cout << "Enter size: ";
        cin >> n;

        // Use dynamic memory allocation (new) or a fixed-size array
        int* A = new int[n]; // Or use a fixed-size array if n is known at compile time

        // Read input values into the array
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        // Print array elements
        cout << "Array elements: ";
        for (int i = 0; i < n; ++i) {
            cout << A[i] << " ";
        }
        cout << endl;

        // Clean up dynamic memory (if using new)
        delete[] A; // free(A);
    return 0;
}