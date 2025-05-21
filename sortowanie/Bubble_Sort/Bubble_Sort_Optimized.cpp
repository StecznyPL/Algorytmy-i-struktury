#include <iostream>

void Bubble_Sort_Optimized(int Liczby[], int rozmiar)
{
	int tymczasowa {};
	bool posortowana {true};
	
	for(int i {0}; i < rozmiar - 1; i++)
	{
		posortowana = true;
		for(int j {0}; j < rozmiar - i - 1; j++)
		{
			if(Liczby[j] > Liczby[j+1])
			{
				posortowana = false;
				tymczasowa = Liczby[j];
				Liczby[j] = Liczby[j+1];
				Liczby[j+1] = tymczasowa;
			}
		}
		if(posortowana)
		{
			break;
		}
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
	Bubble_Sort_Optimized(Liczby, rozmiar);
	wyswietl(Liczby,rozmiar);

	return 0;
}	
