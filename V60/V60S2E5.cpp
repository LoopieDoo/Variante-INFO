#include <iostream>

using namespace std;

//functie pentru gasirea celui mai des intalnit caracter
char maxim(int v[]) //v[] - vectorul de elemente
{
	int imax, max = v[0]; //se inițializează variabila de tip întreg, max, cu primul element al vectorului v[].
	for (int i = 0; i<26; i++) //structura repetitivă de testare al maximului, începând cu primul element până la ultimul.
		if (max < v[i])
		{
			max = v[i];  
			imax = i; //memorarea pozitiei a celui mai des intalnit caracter din sir       
		}
	return (char)(imax+97); //transformarea pozitiei in cod ASCII si returnarea sub forma de caracter
}

int main()
{
	char s[50];
	int cnt[27] = { 0 };
	cin >> s;
	if (*s == (char)toupper(*s))
		cout << "NU";
	else
	{ 
		for (int i = 0; i < strlen(s); i++) //parcurgerea sirului de caractere
			for (char j = 97; j <= 126; j++) //parcurgerea literelor de la a la z
				if (s[i] == char(j)) 
					cnt[j-97]++; //vectorul de aparitii retine de cate ori se afla un caracter in sirul de caractere
		cout << maxim(cnt);
	}
    return 0; 
}

