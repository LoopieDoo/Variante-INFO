/*
Un interval este numit prieten de grad n al unui șir dacă sunt exact n termeni ai șirului cu valori din
interval și dacă toate numerele întregi care aparțin intervalului sunt valori ale unor termeni ai șirului.
Fișierul bac.txt conține un șir de cel mult 10^6
numere naturale din intervalul [0,10^2], separate
prin câte un spațiu. Se cere să se afișeze pe ecran numărul maxim n cu proprietatea că există un
interval prieten de grad n al șirului aflat în fișier. Proiectați un algoritm eficient din punctul de vedere
al timpului de executare.
Exemplu: dacă fișierul conține numerele
10 10 11 3 4 2 49 4 2 3 21 2 27 12 13 14 15 5
atunci se afișează pe ecran 8 (intervalului [2,5] îi aparțin 8 termeni ai șirului) */
#include <iostream>
#include <fstream>

using namespace std;

//functie pentru determinarea celui mai frecvent numar din sir
int max(int aparitii[])
{
	int max = aparitii[0];
	for (int i = 0; i < 100; i++)
		if (max < aparitii[i])
			max = i;
	return max;
}

int main()
{
	int aparitii[100] = { 0 }, x, ind, n=0; 
	ifstream f("bac.txt");
	while (f >> x)  //vectorul aparitii memoreaza numarul de aparitii al unui numar din sir
		aparitii[x]++;
	
	ind = max(aparitii); //indicele de pornire
	n = aparitii[max(aparitii)]; 

	while (aparitii[ind] != 0) //cat timp exista numere consecutive, adunam valorile vectorului aparitii in n
	{
		n += aparitii[ind + 1];
		ind++;
	}
	cout << n;
    return 0;
}

