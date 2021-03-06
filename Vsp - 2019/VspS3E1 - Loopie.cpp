/*
Subprogramul Egal are un parametru, n, prin care primeşte un număr natural cu cel puțin o cifră
impară (n∈[10,109]). Subprogramul returnează valoarea 1 dacă toate cifrele impare ale lui n sunt
egale între ele sau valoarea 0 în caz contrar. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=7727470 sau n=7240 atunci subprogramul returnează 1, iar dacă n=7921470
atunci subprogramul returnează 0.*/
#include <iostream>

using namespace std;

int egal(int n)
{
	int cifcopy = -1;
	while (n != 0)
	{
		if (cifcopy == -1 && (n % 10) % 2 == 1) //initializarea primei cifre
			cifcopy = n % 10;
		if ((n % 10) % 2 == 1)
		{
			if (cifcopy != n % 10) //verificare daca cifra impara curenta nu este egala cu cifra impara precedenta
				return 0; //in caz afirmativ, programul returneaza 0
			cifcopy = n % 10; //setarea cifrei precedente
		}
		n /= 10; //impartirea numarului dupa terminarea operatiilor
	}
	return 1;
}

int main()
{
	cout << egal(7921470);
    return 0;
}

