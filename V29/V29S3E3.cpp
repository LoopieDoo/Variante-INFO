#include <iostream>

using namespace std;

int multiplii(int a, int b, int c)
{
	int k = 0;
	for (int i = a; i <= b; i++)
		if (i % c == 0)
			k++;
	return k;
}

int main()
{
	cout << multiplii(10, 27, 5);
    return 0;
}

