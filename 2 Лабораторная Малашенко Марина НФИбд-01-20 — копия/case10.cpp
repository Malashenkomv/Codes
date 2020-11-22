#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int N;
    char C;
    cin >> C >> N;
	switch (N)
	{
	case 1:
		cout << "поворот налево ";
		break;
	case -1:
		cout << "поворот направо ";
		break;
	case 0:
		cout << "продолжать движение ";
		break;
	default:
		break;
    }

switch (C)
	{
	case 'N':
		cout << "на север";
		break;
	case 'S':
		cout << "на юг";
		break;
	case 'W':
		cout << "на запад";
		break;
	case 'E':
		cout << "на восток";
		break;
    }
    
    return 0;
}