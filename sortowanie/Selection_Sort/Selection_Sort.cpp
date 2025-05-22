#include <iostream>

void Selection_Sort(int Liczby[], int rozmiar)
{
	int tymczasowa {};
	int indeks {};
	for(int i {0}; i < rozmiar - 1; i++)
	{
		indeks = i;
		for(int j {1 + i}; j < rozmiar ; j++)
		{
			if(Liczby[j] < Liczby[indeks])
			{
				indeks = j;
			}
		}
		tymczasowa = Liczby[i];
		Liczby[i] = Liczby[indeks];
		Liczby[indeks] = tymczasowa;
	}
}

void wyswietl(int Liczby[], int rozmiar)
{
	for(int i {0}; i < rozmiar; i++)
	{
		std::cout << Liczby[i] << " ";
	}
	std::cout << "\n";
}

int main()
{
	int Liczby[] {5,4,3,2,1};
	int rozmiar {sizeof(Liczby)/sizeof(Liczby[0])};

	wyswietl(Liczby, rozmiar);
	Selection_Sort(Liczby,rozmiar);
	wyswietl(Liczby, rozmiar);

	return 0;
}
	

			
			
