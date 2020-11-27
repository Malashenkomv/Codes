#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, K, a, sum = 0, p;
    
    cout << "Введите через пробел K (кол-во наборов), N (размер набора), а затем числа в этих наборах " << endl ;
    
    cin >> K ;
    cin >> N ;
    p = N;
    do {
    do {
        cin >> a;
        N--;
        sum += a;
        } while (N > 0); 
        cout << sum << " " ;
        sum = 0;
        K --;
        N = p;
    } while (K >= 0);
    

    return 0;
}
