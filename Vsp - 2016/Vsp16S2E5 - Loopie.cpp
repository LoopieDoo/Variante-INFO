#include <iostream>
#include <string.h>

using namespace std;


int main()
{
	char s[20][20], rez[100]="\0";
	int n, k;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> s[i];
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		if (strlen(s[i]) == k)
		{
			strcat(rez, s[i]);
			strcat(rez, " ");
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (strlen(s[i]) != k)
		{
			strcat(rez, s[i]);
			strcat(rez, " ");
		}
	}
	cout << rez;
    return 0;
}

