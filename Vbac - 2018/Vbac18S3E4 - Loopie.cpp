#include <iostream>
#include <fstream>

using namespace std;

/*Solutia problemei consta in parcurgerea pe rand a numerelor din fisier, memorandu-se precedentul si anteprecendtul cu ajutorul carora se compara daca 
sunt egale sau nu intre ele. In caz afirmativ, lungimea secventei creste, iar in caz contrar sirul 
se termina si se reseteaza contorul, fiind determinat maximul dintre toate subsirurile.*/

int main()
{
	int prevx=-1, x, k=0, max=0, antex=-1;
	ifstream f("bac.txt");
	while (f >> x)
	{
		if (prevx != x && antex != x) //verificare daca numerele sunt egale intre ele
			k++;
		else
		{
			k++;
			if (max < k)
				max = k;
			k = 0;
		}
		antex = prevx;
		prevx = x;
	}
	k++; //pentru ultimul subsir citit
	if (max < k)
		max = k;
	cout << max;
    return 0;
}

