#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 100 == 0 and n % 400 != 0) cout << 365; else
    if (n % 4 == 0) cout << 366; else cout << 365 ;

    return 0;
}
