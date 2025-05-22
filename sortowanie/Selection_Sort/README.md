## 🧠 Selection Sort

**Selection Sort** to prosty algorytm sortowania działający w czasie O(n²), który działa przez wielokrotne wyszukiwanie najmniejszego (lub największego) elementu i umieszczanie go na właściwej pozycji.

---

### 🔍 Zasada działania

1. Dla każdej pozycji `i` w tablicy:
   - Znajdź najmniejszy element w zakresie od `i` do końca tablicy.
   - Zamień element na pozycji `i` z tym najmniejszym.

Nie zmienia to liczby elementów — tylko ich kolejność.

---

### 📦 Przykład działania

Dla tablicy:  
`[5, 3, 6, 2, 1]`

Po kolejnych krokach:  
➡ `[1, 3, 6, 2, 5]`  
➡ `[1, 2, 6, 3, 5]`  
➡ `[1, 2, 3, 6, 5]`  
➡ `[1, 2, 3, 5, 6]` ✅

---

### ⏱️ Złożoność obliczeniowa

| Rodzaj               | Złożoność |
|----------------------|-----------|
| Czas – najlepszy     | O(n²)     |
| Czas – średni        | O(n²)     |
| Czas – najgorszy     | O(n²)     |
| Zużycie pamięci      | O(1)      |
| Stabilność           | ❌ Nie     |
| Algorytm in-place     | ✅ Tak     |
| Rekurencyjność        | ❌ Nie     |

---

> 🔧 **Uwaga**: Selection Sort nie jest stabilny i nie nadaje się do bardzo dużych zbiorów danych, ale jego prostota sprawia, że często służy do celów edukacyjnych.

