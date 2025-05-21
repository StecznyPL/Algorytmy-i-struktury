#include <iostream>

void Bubble_Sort(int Liczby[], int rozmiar)
{
	int tymczasowa {};
	for(int i {0}; i < rozmiar - 1; i++)
	{
		for(int j {0}; j < rozmiar - i - 1; j++)
		{
			if(Liczby[j] > Liczby[j+1])
			{
				tymczasowa = Liczby[j];
				Liczby[j] = Liczby[j+1];
				Liczby[j+1] = tymczasowa;
			}
		}
	}
}

void Wyswietl(int Liczby[], int rozmiar)
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

	Wyswietl(Liczby, rozmiar);
	Bubble_Sort(Liczby, rozmiar);
	Wyswietl(Liczby, rozmiar);
	
	return 0;
}
