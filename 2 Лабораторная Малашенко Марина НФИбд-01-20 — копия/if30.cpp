#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0) cout << "четное "; else cout << "нечетное ";
    if (a >= 1 and a < 10) cout << "однозначное ";
    if (a >= 10 and a < 100) cout << "двузначное ";
    if (a >= 100 and a < 1000) cout << "трехзначное ";
    cout << "число";

    return 0;
}
