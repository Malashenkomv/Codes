#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int N;
    float a, B;
    cout << "Введите через пробел размер последовательности символов N, число B, саму последовательность чисел " << endl ;
    cin >> N ;
    cin >> B ;
    cout << B << " ";
    do {
        cin >> a;
        cout << a << " ";
        N--;
        } while (N + 1 > 0);

    return 0;
}
