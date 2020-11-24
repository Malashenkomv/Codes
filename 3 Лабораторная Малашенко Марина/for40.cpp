#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int A, B, k = 0;
    cin >> A >> B ;
    for (int i = A; i <= B; i++) {
        for (int j = 0; j <= k; j++) {
        cout << A << " "; 
        }
         A++;
        cout << endl ;
        k++;
    }

    return 0;
}
