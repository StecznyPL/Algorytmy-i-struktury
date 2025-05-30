#include <iostream>

void Bubble_Sort_Optimized(int liczby[], int rozmiar)
{
	bool sorted {};
	int tmp {};
	
	for(int i {0}; i < rozmiar - 1; i++)
	{
		sorted = true;
		for(int j {0}; j < rozmiar - i - 1; j++)
		{
			if(liczby[j] > liczby[j+1])
			{
				sorted = false;
				tmp = liczby[j];
				liczby[j] = liczby[j+1];
				liczby[j+1] = tmp;
			}
		}
		if(sorted)
		{	
			break;
		}
	}	
}

void Wyswietl(int liczby[], int rozmiar)
{
	for(int i {0}; i < rozmiar; i++)
	{
		std::cout << liczby[i] << " ";
	}
	std::cout << "\n";
}

int main()
{
	int liczby[] {5,4,3,2,1};
	int rozmiar {sizeof(liczby)/sizeof(liczby[0])};

	Wyswietl(liczby,rozmiar);
	Bubble_Sort_Optimized(liczby,rozmiar);
	Wyswietl(liczby,rozmiar);

	return 0;
}
	
