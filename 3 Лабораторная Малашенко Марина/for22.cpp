#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float X, f = 1, sum = 1;
    int N, i, j;
    cin >> X >> N;
    
    int M = N;
    for (i = 1; i <= N; i++) {
    for (j = 1; j <= M; j++) {
        f *= j; 
    } 
    sum += pow (X, N) / f;
    f = 1;
    M--;
    }
    
    cout << "Приближенное значение экспоненты в точке X с точностью N равно: " ;
    cout << sum ;

    return 0;
}
