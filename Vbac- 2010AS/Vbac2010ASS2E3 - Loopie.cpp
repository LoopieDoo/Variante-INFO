#include <iostream>

using namespace std;

int main()
{
	int m[5][5], k=1;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			m[j][i] = k;
			k++;
		}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
    return 0;
}

