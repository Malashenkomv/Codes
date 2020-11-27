#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, F2 = 1, F1 = 1, F3 = 0, k;
    cin >> N;
    
    while (F3 <= N) {
        F3 = F2 + F1;  
        k = F1;
        F1 = F2;  
        F2 = F3; 
    }
    F3 = F3 - k;
    
    if (F3 == N) cout << "True"; else cout << "False";

    return 0;
}
