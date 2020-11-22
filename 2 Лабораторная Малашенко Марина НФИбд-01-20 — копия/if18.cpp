#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a != b and a != c) cout << 1;
    if (b != c and b != a) cout << 2;
    if (c != b and c != a) cout << 3;

    return 0;
}
