/*
Se citeşte de la tastatură un număr natural n (n≤500) şi apoi n cifre separate prin spaţii. Se
cere să se afişeze pe ecran cele n cifre citite, în ordine crescătoare, separate prin câte un
spaţiu. */
#include <iostream>
using namespace std;

int main()
{
	int n, setofnumbers, v[11] = { 0 };
	cin >> n;
	setofnumbers = n;
	for (int i = 0; i < setofnumbers; i++)
	{
		cin >> n;
		v[n] += 1;
	}
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < v[i]; j++)
			cout << i << " ";
}

