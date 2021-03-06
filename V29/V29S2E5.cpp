#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n, a[6][6], sumcol=0, sumprimcol=0, x=1;
	ifstream f("matrice.txt");
	f >> n;
	//citire matrice
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			f >> a[i][j];
		sumprimcol += a[i][0]; //suma elementelor din prima coloana
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			sumcol += a[j][i];      //suma coloanelor
		if (sumcol % sumprimcol == 0)  //verificare daca exista pivot intre coloanele alaturate si prima coloana
			x *= (sumcol / sumprimcol);  //inmultirea pivotilor
		sumcol = 0;                      //resetarea variabilei care retine suma coloanelor pentru a insuma o coloana noua
	}
	cout << x;
    return 0;
}

