# Bubble Sort - Sortowanie Babelkowe

Prosty kod napisany w jezyku c++
Algorytm dziala na zasadzie porownywania sasiednich elementow i zamieniania ich miejscami, jesli sa w zlej kolejnosci.
Jest to dobry algorytm do nauki ale nie stosowany z uwagi na bardzo slaba wydajnosc.

## Zlozonosc
|Przypadek | Zlozonosc |
|----------|-----------|
|Najgorszy | O(n^2)    |
|Sredni    | O(n^2)    |
|Najlepszy | O(n^2) O(n) przy optymalizacji |

### Kompilacja

``` bash
g++ Bubble_Sort.cpp -o Bubble_Sort.o
./Bubble_Sort.o
```

### Zawartosc 
BubbleSort.cpp -> zwyczajny bubble sort
BubbleSortOptimized -> Bubble sort z flaga (zoptymalizowany) moze osiagnac O(n)
BubbleSort.jpg -> Schemat blokowy
BubbleSort.xlsx -> Arkusz kalkulacyjny prezentujacy przebieg zmiennych
