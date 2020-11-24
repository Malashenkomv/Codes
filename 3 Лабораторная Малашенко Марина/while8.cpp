#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int N, K = 0;
    cin >> N ;
    while (K*K <= N) {
        K++;
        }
    cout << K - 1 ;

    return 0;
}
