#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define ILE 10 /*ILE liczb w tablicy w zadaniu 75*/
#define MIN 0 /*dolna granica przedzialu w funkcji wczytaj_int_ograniczone*/
#define MAX 100 /*gorna granica przedzialu w funkcji wczytaj_int_ograniczone (i maksymalny wymiar uzytej tablicy w zadaniu 76)*/
#define INT_FIB 20 /*gorna granica przedzialu dla ciagu fibonacciego*/

/** Pobiera od uzytkownika liczbe calkowita i zwraca ja. Przeprowadza kontrole
* poprawnosci danych. Pozwala porawic bledne dane.
*
* @return pobrana liczba
*/
int wczytaj_naturalna(void);
/** Pobiera od uzytkownika ustalona ilosc liczb calkowitych i umieszcza je w tablicy.
* Przeprowadza kontrole poprawnosci danych. Pozwala porawic bledne dane.
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void wczytaj_int_1W(int* tab, int n);
/** Wypisuje podana liczbe liczb liczac od poczatku tablicy.
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void wypisz_od_poczatku(int* tab, int n);
/** Wypisuje podana liczbe liczb typu double liczac od poczatku tablicy.
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void wypisz_od_poczatku_double(double* tab, int n);
/** Wypisuje podana liczbe liczb liczac od konca tablicy
* (lub jesli n jest mniejsze od liczby elementow tablicy,
* wypisuje liczby liczac od podanego indeksu).
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void wypisz_od_konca(int* tab, int n);
/** Wypisuje sume elementow tablicy jednowymiarowej.
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void suma_z_tablicy_1W(int* tab, int n);
/** Wypisuje iloczyn niezerowych elementow tablicy jednowymiarowej.
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void iloczyn_z_tablicy_1W(int* tab, int n);
/** Zwraca ciag fibancciego dlugosci n.
*
* @param n dlugosc ciagu (ilosc liczb)
*/
int fibonacci(int n);
/** Zapisuje ciag fibonacciego w postaci tablicy 
* jednowymiarowej.
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void wczytaj_fib_1W(int* tab, int n);
/** Sortuje tablice jednowymiarowa liczb calkowitych 
* w kolejnosci od najmniejszej do najwiekszej.
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void sortuj(int* tab, int n);
/** Sortuje tablice jednowymiarowa liczb typu double
* w kolejnosci od najmniejszej do najwiekszej.
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void sortuj_double(double* tab, int n);
/** Zwraca szescian liczby n
*
* @param n liczba
*/
int szescian(int n);
/** Tworzy tablice jednowymiarowa szescianow n liczb
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void tab_szescianow_int_1W(int* tab, int n);
/** Liczy liczby narcystyczne trzycyfrowe.
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void suma_szescianow(int* tab, int n);
/** Zwraca wygenerowana liczbe pseudolosowa typu double z okreslonego przedzialu.
*
* @param g_dolna to dolna granica przedzialu
* @param g_gorna to dolna granica przedzialu
*/
double losuj_liczbe_z_przedzialu(int g_dolna, int g_gorna);
/** Tworzy tablice n liczb pseudolosowych.
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void tab_liczb_pseudolosowych(int* tab, int n);
/** Tworzy tablice n liczb pseudolosowych typu double z okreslonego przedzialu.
*
* @param tab adres poczatku tablicy
* @param n ilosc liczb
* @param tab adres poczatku tablicy
* @param n ilosc liczb
*/
void tab_liczb_pseudolosowych_z_przedzialu(double* tab, int n, int g_dolna, int g_gorna);

void info75(void) {
	printf("Zadanie 75.\nProgram wczytuje 10 liczb do tablicy i wypisuje ja na dwa sposoby.\n");
	printf("Autorka: Katarzyna Arent.\n\n");
}

void info76(void) {
	printf("Zadanie 76.\nProgram wczytuje ciag liczb i liczy iloczyn i sume jego niezerowych elementow.\n");
	printf("Autorka: Katarzyna Arent.\n\n");
}

void info77(void) {
	printf("Zadanie 77.\nProgram wypisuje liczby trzycyfrowe, ktorych suma szescianow cyfr jest rowna tej liczbie, czyli liczby Armstronga.\n");
	printf("Autorka: Katarzyna Arent.\n\n");
}

void info78(void) {
	printf("Zadanie 78.\nProgram oblicza n wyrazow ciagu Fibonacciego i wypisuje je od najwiekszej do najmniejszej.\n");
	printf("Autorka: Katarzyna Arent.\n\n");
}

void info79(void) {
	printf("Zadanie 79.\nProgram wczytuje 10 liczb wypisuje je od najmniejszej do najwiekszej.\n");
	printf("Autorka: Katarzyna Arent.\n\n");
}

void info80(void) {
	printf("Zadanie 80.\nProgram wypisuje 10 liczb pseudolosowych ca³kowitych.\n");
	printf("Autorka: Katarzyna Arent.\n\n");
}

void info81(void) {
	printf("Zadanie 81.\nProgram wypisuje 10 liczb pseudolosowych wymiernych z przedzialu [0,2].\n");
	printf("Autorka: Katarzyna Arent.\n\n");
}

int wczytaj_naturalna(void) { //wczytywanie przy pomocy scanf_s z kontrol¹ poprawnoœci
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Bledna liczba. Popraw: ");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

int wczytaj_int_ograniczone(int g_dolna, int g_gorna) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || (liczba < g_dolna || liczba > g_gorna) || getchar() != '\n') {
		printf("Bledna liczba. Popraw: ");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

void wczytaj_int_1W(int *tab, int n) {
	for (int i = 0; i < n; ++i) {
		printf("liczba %d: ", i + 1);
		int liczba = wczytaj_naturalna();
		tab[i] = liczba;
	}
}

void wypisz_od_poczatku(int* tab, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", tab[i]);
	}
}

void wypisz_od_poczatku_double(double* tab, int n) {
	for (int i = 0; i < n; i++) {
		printf("%g ", tab[i]);
	}
}

void wypisz_od_konca(int *tab, int n) {
	for (int i = n - 1; i >= 0; --i) {
		printf("%d ", tab[i]);
	}
}

void suma_z_tablicy_1W(int* tab, int n) {
	int suma = 0;
	for (int i = 0; i < n; i++) {
		suma += tab[i];
	}
	printf("Suma wyrazow ciagu to %d\n", suma);
}

void iloczyn_z_tablicy_1W(int* tab, int n) {
	int iloczyn = 1;
	for (int i = 0; i < n; i++) {
		if (tab[i] != 0) {
			iloczyn *= tab[i];
		}
	}
	printf("Iloczyn wyrazow ciagu to %d\n", iloczyn);
}

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}

void wczytaj_fib_1W(int* tab, int n) {
	for (int i = 0; i < n; ++i) {
		tab[i] = fibonacci(i);
	}
}

void sortuj(int* tab, int n) {
	for (int k = 0; k < n - 1; ++k) {
		//znalezienie minimum w czesci od tab[k] do konca tablicy
		int min = INT_MAX; //aktualne minimum
		int gdzie = -1; //indeks, pod ktorym znajduje sie aktualne minimum
		for (int i = k; i < n; ++i) {
			if (tab[i] < min) { //czy liczba na ktora aktualnie patrze jest mniejsza od obecnego minimum
				min = tab[i];
				gdzie = i;
			}
		}
		//zamiana znalezionego minimum z tab[k]
		int pom = tab[k];
		tab[k] = min;
		tab[gdzie] = pom;
	}
}

void sortuj_double(double* tab, int n) {
	for (int k = 0; k < n - 1; ++k) {
		//znalezienie minimum w czesci od tab[k] do konca tablicy
		double min = INT_MAX; //aktualne minimum
		int gdzie = -1; //indeks, pod ktorym znajduje sie aktualne minimum
		for (int i = k; i < n; ++i) {
			if (tab[i] < min) { //czy liczba na ktora aktualnie patrze jest mniejsza od obecnego minimum
				min = tab[i];
				gdzie = i;
			}
		}
		//zamiana znalezionego minimum z tab[k]
		double pom = tab[k];
		tab[k] = min;
		tab[gdzie] = pom;
	}
}

int szescian(int n) {
	return n * n * n;
}

void tab_szescianow_int_1W(int* tab, int n) {
	for (int i = 0; i < n; ++i) {
		int liczba = szescian(i);
		tab[i] = liczba;
	}
}

void suma_szescianow(int* tab, int n) {
	for (int s = 1; s < n; ++s) { //cyfry setek
		for (int d = 0; d < n; ++d) { //cyfry dziesiatek
			for (int j = 0; j < n; ++j) { //cyfry jednosci
				int liczba = 100 * s + 10 * d + j; //sklejanie liczby
				if (liczba == tab[s] + tab[d] + tab[j]) {
					printf("%d^3 + %d^3 + %d^3 =   ", s, d, j);
					printf("%d\n", liczba);
				}
			}
		}
	}
}

double losuj_liczbe_z_przedzialu(int g_dolna, int g_gorna) { //funkcja nie jest skonczona zeby byla ogolna, ale dziala na potrzeby zadania
	double y;
	y = rand() / (double)RAND_MAX * 2.0;
	return y;
}

void tab_liczb_pseudolosowych(int* tab, int n) {
	for (int i = 0; i < n; ++i) {
		int liczba = rand();
		tab[i] = liczba;
	}
}

void tab_liczb_pseudolosowych_z_przedzialu(double* tab, int n, int g_dolna, int g_gorna) { //funkcja nie jest skonczona zeby byla ogolna, ale dziala na potrzeby zadania
	for (int i = 0; i < n; ++i) {
		double liczba = losuj_liczbe_z_przedzialu(g_dolna, g_gorna);
		tab[i] = liczba;
	}
}

	main() {
	//Zadanie 75.
	info75();
	printf("Podaj 10 liczb.\n");
	int liczby[ILE];
	wczytaj_int_1W(liczby, ILE);
	printf("\n\nliczby od poczatku do konca: ");
	wypisz_od_poczatku(liczby, ILE);
	printf("\n\nliczby od konca do poczatku: ");
	wypisz_od_konca(liczby, ILE);
	printf("\n\nKoniec programu.\n\n");
	//Zadanie 76.
	info76();
	printf("Ile elementow ciagu chcesz podac? Maksymalnie 100: ");
	int dl_ciagu;
	dl_ciagu = wczytaj_int_ograniczone(MIN, MAX);
	///////////////////wersja z tablica///////////////////
	int tablica[MAX];
	wczytaj_int_1W(tablica, dl_ciagu);
	suma_z_tablicy_1W(tablica, dl_ciagu);
	iloczyn_z_tablicy_1W(tablica, dl_ciagu);
	printf("\n\nKoniec programu.\n\n");
	/////////////////wersja bez tablicy///////////////////
	int liczba, suma = 0, iloczyn = 1;
	for (int i = 0; i < dl_ciagu; ++i) {
		printf("liczba %d: ", i + 1);
		liczba = wczytaj_naturalna();
		suma += liczba;
		if (liczba != 0) {
			iloczyn *= liczba;
		}
	}
	printf("Suma wyrazow ciagu to %d\n", suma);
	printf("Iloczyn wyrazow ciagu to %d\n", iloczyn);
	printf("\n\nKoniec programu.\n\n");
	//Zadanie 77.
	info77();
	int tab_szescianow[ILE];
	tab_szescianow_int_1W(tab_szescianow, ILE);
	printf("Oto te liczby:\n");
	suma_szescianow(tab_szescianow, ILE);
	printf("\n\nKoniec programu.\n\n");
	//Zadanie 78.
	info78();
	printf("Ile elementow ciagu Fibonacciego chcesz zobaczyc? Maksymalnie 20: ");
	int dl_ciagu;
	int tab_fib[INT_FIB];
	dl_ciagu = wczytaj_int_ograniczone(MIN, INT_FIB);
	wczytaj_fib_1W(tab_fib, dl_ciagu);
	printf("\nCiag Fibonacciego od najwiekszej do najmniejszej:\n\n\t\t");
	wypisz_od_konca(tab_fib, dl_ciagu);
	printf("\n\nKoniec programu.\n\n");
	//Zadanie 79.
	info79();
	printf("Podaj 10 liczb calkowitych.\n");
	int tablica[10];
	wczytaj_int_1W(tablica, 10);
	printf("\nPodales liczby:\t\t");
	wypisz_od_poczatku(tablica, 10);
	sortuj(tablica, 10);
	printf("\nLiczby posortowane:\t");
	wypisz_od_poczatku(tablica, 10);
	printf("\n\nKoniec programu.\n\n");
	//Zadanie 80.
	info80();
	srand((unsigned)time(NULL));
	int tab[ILE];
	tab_liczb_pseudolosowych(tab, ILE);
	wypisz_od_poczatku(tab, ILE);
	sortuj(tab, ILE);
	putchar('\n');
	wypisz_od_poczatku(tab, ILE);
	printf("\n\nKoniec programu.\n\n");
	//Zadanie 81.
	info81();
	srand((unsigned)time(NULL));
	double tab_0_2[ILE];
	tab_liczb_pseudolosowych_z_przedzialu(tab_0_2, ILE, 0, 2);
	wypisz_od_poczatku_double(tab_0_2, ILE);
	sortuj_double(tab_0_2, ILE);
	putchar('\n');
	wypisz_od_poczatku_double(tab_0_2, ILE);
	printf("\n\nKoniec programu.\n\n");
	return 0;
}