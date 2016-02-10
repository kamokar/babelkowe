#include <iostream>
#include <ctime>
using namespace std;

void sortuj(int *tab, int ROZM)
{
	int tmp;
	for (int i = 0; i < ROZM; i++)
		for (int j = 0; j < i; j++)
			if (tab[j] > tab[i])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
};

int main()
{
	const int ROZM = 10;
	int tab[ROZM];
	srand(time(0));

	for (int i = 0; i < ROZM; i++)
	{
		tab[i] = rand() % 100;
		cout << tab[i] << endl;
	}

	sortuj(tab, ROZM);
	cout << endl;

	for (int i = 0; i < ROZM; i++)
	{
		cout << tab[i] << endl;
	}























	getchar();
	return 0;
}