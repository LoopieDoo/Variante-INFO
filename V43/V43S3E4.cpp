#include <iostream>
#include <fstream>

using namespace std;

//sortare folosind algoritmul quicksort(eficient din punct de vedere al timpului de executie)
void quickSort(int *array, int low, int high)
{
	int i = low;
	int j = high;
	int pivot = array[(i + j) / 2];
	int temp;
	while (i <= j)
	{
		while (array[i] > pivot)
			i++;
		while (array[j] < pivot)
			j--;
		if (i <= j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	}
	if (j > low)
		quickSort(array, low, j);
	if (i < high)
		quickSort(array, i, high);
}

int main()
{
	long n;
	int cifre[100000];
	ifstream f("numere.txt");
	f >> n;
	//citirea cifrelor
	for (int i = 0; i < n; i++)
		f >> cifre[i];
	quickSort(cifre, 0, n-1); //sortare descrescatoare a vectorului cifre pentru a forma cel mai mare numar posibil
	for (int i = 0; i < n; i++)
		cout << cifre[i];  //numarul obtinut
    return 0;
}
