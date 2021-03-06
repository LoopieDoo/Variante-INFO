/*Fişierul text BAC.TXT conţine mai multe numere naturale, cu cel mult 6 cifre fiecare, câte
un număr pe fiecare linie a fişierului.
4.
Scrieţi un program C/C++ care citeşte toate numerele din fişierul BAC.TXT şi le
afişează pe ecran, în aceeaşi ordine, câte cinci pe fiecare linie, separate prin câte
un spaţiu, cu excepţia ultimei linii care poate conţine mai puţin de cinci numere.
Programul va afişa apoi pe ecran, pe o linie separată, câte numere din fişier au
suma cifrelor pară. */
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n, contor = 0, s, sumpar = 0;
	ifstream f("BAC.TXT");
	while (f >> n)  //citirea numerelor din fisier
	{
		s = 0; //resetarea sumei dupa fiecare spargere a numarului in cifre
		cout << n << " ";
		while (n != 0) //spargerea numarului in cifre
		{
			s += n % 10;
			n = n / 10;
		}
		if (s % 2 == 0) //verificare daca suma cifrelor este para
			sumpar++;
		contor++; //incrementarea contorului de iteratii pentru a afisa cate 5 elemente pe o linie
		if (contor % 5 == 0)
			cout << endl;
	}
	cout << endl;
	cout << sumpar;
	f.close();
    return 0;
}

