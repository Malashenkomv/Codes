#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    float a, b, c, p;
    cin>>a>>b>>c;
    p = c;
    c = b;
    b = a;
    a = p;
    cout<<a<<' '<<b<<' '<<c;

    return 0;
}
