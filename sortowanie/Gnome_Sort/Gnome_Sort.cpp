#include <iostream>

void Gnome_Sort(int Liczby[], int rozmiar)
{
	int i {1};
	int tymczasowa {};
	while(i < rozmiar)
	{
		if(i == 0 || Liczby[i] >= Liczby[i-1])
		{
			i++;
		}
		else
		{
			tymczasowa = Liczby[i];
			Liczby[i] = Liczby[i-1];
			Liczby[i-1] = tymczasowa;
			i--;
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
	Gnome_Sort(Liczby, rozmiar);
	wyswietl(Liczby, rozmiar);

	return 0;
}
