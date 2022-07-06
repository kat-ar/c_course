#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX_ROZM 25 // maksymalny rozmiar macierzy 
#define MIN 0 // minimalna wartosc, jezeli chcemy operowac na liczbach naturalnych
#define JEDEN 1
#define G_GORNA 8
#define G_DOLNA -8
#define ILE 20

enum { false, true };

/** Pobiera od uzytkownika liczbe calkowita i zwraca ja. Przeprowadza kontrole
* poprawnosci danych. Pozwala porawic bledne dane.
*
* @return pobrana liczba
*/
int wczytaj_int(void);
/** Pobiera od uzytkownika liczbe rzeczywista i zwraca ja. Przeprowadza kontrole
* poprawnosci danych. Pozwala porawic bledne dane.
*
* @return pobrana liczba
*/
float wczytaj_rzeczywista(void);
/** Pobiera od uzytkownika liczbe calkowita i zwraca ja. Przeprowadza kontrole
* poprawnosci danych. Pozwala porawic bledne dane.
*
* @param g_dolna dolna granica przedzialu
* @param g_gorna dolna granica przedzialu
* @return pobrana liczba
*/
int wczytaj_int_ograniczone(int g_dolna, int g_gorna);
/** Pobiera od uzytkownika informacje, czy chce by program wylosowal za niego elementy tablicy.
*
* @return 1, jesli losowanie, wpp 0
*/
_Bool czy_losowanie(void);
/** W zaleznosci od wartosci funkcji czy_losowanie, wypelnia tablice rozmiaru m x n wartosciami podanymi przez uzytkownika
* lub wartosciami losowymi z przedzialu (g_dolna, g_gorna).
* 
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy
* @param n uzywana liczba kolumn
* @param g_dolna dolna granica przedzialu
* @param g_gorna dolna granica przedzialu
*/
void wypelnianie_tablicy(double tab[][MAX_ROZM], int m, int n, int g_dolna, int g_gorna);
/**
* Tablica pobiera od uzytkownika liczby zmiennopozycyjne i umieszcza je w tablicy dwuwymiarowej.
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy
* @param n uzywana liczba kolumn
*/

void wczytaj_double_2W(double tab[][MAX_ROZM], int m, int n);
/** Wypisuje tablice liczb rzeczywistych od poczatku tablicy.
*
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy
* @param n uzywana liczba kolumn
*/
void wypisz_od_poczatku_2W(double tab[][MAX_ROZM], int m, int n);
/** Wypisuje tablice liczb calkowitych od poczatku tablicy.
*
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy
* @param n uzywana liczba kolumn
*/
void wypisz_od_poczatku_int_2W(int tab[][MAX_ROZM], int m, int n);
/** Wypisuje tablice liczb rzeczywistych, od poczatku, kolumnami zamiast wierszami (dokonywane jest transponowanie).
*
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy
* @param n uzywana liczba kolumn
*/
void wypisz_transponowana_2W(double tab[][MAX_ROZM], int m, int n);
/** Zwraca wygenerowana liczbe pseudolosowa rzeczywista z okreslonego przedzialu.
*
* @param g_dolna dolna granica przedzialu
* @param g_gorna dolna granica przedzialu
* @return wylosowana liczba
*/
double losuj_liczbe_z_przedzialu(int g_dolna, int g_gorna);
/** Zwraca wygenerowana pseudolosowo liczbe zero lub jeden.
*
* @return wylosowana liczba
*/
int losuj_zero_lub_jeden(void);
/** Tworzy tablice n liczb pseudolosowych typu double z okreslonego przedzialu.
*
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy
* @param n uzywana liczba kolumn
* @param g_dolna dolna granica przedzialu
* @param g_gorna dolna granica przedzialu
*/
void tab_liczb_pseudolosowych_z_przedzialu(double tab[][MAX_ROZM], int m, int n, int g_dolna, int g_gorna);
/** Tworzy tablice m x n liczb zero i jeden.
*
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy
* @param n uzywana liczba kolumn
*/
void tab_0_1(int tab[][MAX_ROZM], int m, int n);
/** Zwraca element maksymalny tablicy.
*
* @return element maksymalny
*/
double element_maksymalny_tab_2W(double tab[][MAX_ROZM], int m, int n);
/** Sprawdza, czy w kazdym wierszu tablicy znajduje sie dokladnie jedna jedynka.
*
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy
* @param n uzywana liczba kolumn
* @return 1, jesli dokladnie jedna, wpp 0
*/
_Bool dokladnie_jedna_jedynka_wiersz(int tab[][MAX_ROZM], int m, int n);
/** Sprawdza, czy w kazdej kolumnie tablicy znajduje sie dokladnie jedna jedynka.
*
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy
* @param n uzywana liczba kolumn
* @return 1, jesli dokladnie jedna, wpp 0
*/
_Bool dokladnie_jedna_jedynka_kol(int tab[][MAX_ROZM], int m, int n);
/** Sumuje wszystkie elementy tabeli rozmianu m x n.
*
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy
* @param n uzywana liczba kolumn
* @return suma elementow
*/
double suma_elementow_tabeli_2W(double tab[][MAX_ROZM], int m, int n);
/** Sumuje wszystkie elementy tabeli z glownej przekatnej tabeli rozmiaru m x m.
*
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy i kolumn
* @return suma elementow
*/
double suma_z_glownej_przekatnej(double tab[][MAX_ROZM], int m);
/** Sumuje wszystkie elementy tabeli powyzej glownej przekatnej tabeli rozmiaru m x m.
*
* @param tab adres poczatku tablicy
* @param m uzywana liczba wierszy i kolumn
* @return suma elementow
*/
double suma_powyzej_glownej_przekatnej(double tab[][MAX_ROZM], int m);

void info87(void) {
	printf("Zadanie 87.\nProgram wczytuje i wypisuje macierz o wymiarach m wierszy x n kolumn.\nAutorka: Katarzyna Arent.\n\n");
}

void info88(void) {
	printf("Zadanie 88.\nProgram wczytuje macierz o wymiarach m wierszy x n kolumn\ni wypisuje macierz transponowana (o n wierszach i m kolumnach).\nAutorka: Katarzyna Arent.\n\n");
}

void info89(void) {
	printf("Zadanie 89.\nProgram wypisuje macierz o wymiarach m wierszy x n kolumn\ni znajduje element maksymalny.\nAutorka: Katarzyna Arent.\n\n");
}

void info90(void) {
	printf("Zadanie 90.\nProgram wypisuje macierz 0 i 1 o wymiarach m wierszy x n kolumn\ni sprawdza, czy w kazdym wierszu i kazdej kolumnie znajduje sie dokladnie jedna 1.\nAutorka: Katarzyna Arent.\n\n");
}

void info91(void) {
	printf("Zadanie 91.\nProgram liczy sume wszystkich wyrazow macierzy.\nAutorka: Katarzyna Arent.\n\n");
}

void info92(void) {
	printf("Zadanie 92.\nProgram liczy sume wyrazow z glownej przekatnej macierzy (mozna podac tylko macierz kwadratowa).\nAutorka: Katarzyna Arent.\n\n");
}

void info93(void) {
	printf("Zadanie 93.\nProgram liczy sume wyrazow powyzej glownej przekatnej macierzy (mozna podac tylko macierz kwadratowa).\nAutorka: Katarzyna Arent.\n\n");
}

int wczytaj_int(void) { //wczytywanie przy pomocy scanf_s z kontrol¹ poprawnoœci
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Bledna liczba. Popraw: ");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

float wczytaj_rzeczywista(void) { //wczytywanie przy pomocy scanf_s z kontrol¹ poprawnoœci
	float liczba;
	while (scanf_s("%f", &liczba) != 1 || getchar() != '\n') {
		printf("Bledna liczba. Popraw: ");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

float wczytaj_rzeczywista_ograniczone(int g_dolna, int g_gorna) { //wczytywanie przy pomocy scanf_s z kontrol¹ poprawnoœci
	printf("(min %d, max %d): ", g_dolna, g_gorna);
	float liczba;
	while (scanf_s("%f", &liczba) != 1 || (liczba < g_dolna || liczba > g_gorna) || getchar() != '\n') {
		printf("Bledna liczba. Popraw: ");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

int wczytaj_int_ograniczone(int g_dolna, int g_gorna) { // wczytywanie liczby calkowitej z ustalonego zakresu
	printf("(min %d, max %d): ", g_dolna, g_gorna);
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || (liczba < g_dolna || liczba > g_gorna) || getchar() != '\n') {
		printf("Bledna liczba. Popraw: ");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

_Bool czy_losowanie(void) {
	printf("\nChcesz sam(a) podac elementy macierzy? Jesli nie, program wypelni ja losowymi wartosciami.");
	printf("\n0. TAK\t1. NIE\n");
	printf("Twoj wybor: ");
	int wybor;
	wybor = wczytaj_int_ograniczone(MIN, JEDEN);
	return wybor;
}

void wypelnianie_tablicy(double tab[][MAX_ROZM], int m, int n, int g_dolna, int g_gorna) {
	int losowanie = czy_losowanie();
	switch (losowanie) {
	case 0:
		//wczytywanie
		printf("\nPodaj elementy macierzy o %d wierszach i %d kolumnach.\n\n", m, n);
		wczytaj_double_2W(tab, m, n);
		printf("\n\n/////////////////////////////////////////////////////////////////////\n\n");
		printf("Oto wczytana tablica.\n\n");
		break;
	case 1:
		//losowanie
		tab_liczb_pseudolosowych_z_przedzialu(tab, m, n, g_dolna, g_gorna);
		printf("\n\n/////////////////////////////////////////////////////////////////////\n\n");
		printf("Oto tablica liczb pseudolosowych z zakresu (%d, %d), rozmiaru %d x %d.\n\n", g_dolna, g_gorna, m, n);
		break;
	}
}

void wczytaj_double_2W(double tab[][MAX_ROZM], int m, int n) { // twprzenie tablicy dwuwymiarowej okreslonego rozmiaru. elementy podaje uzytkownik
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("element[%d][%d] = ", i, j);
			double liczba = wczytaj_rzeczywista();
			tab[i][j] = liczba;
		}
	}
}

void wypisz_od_poczatku_2W(double tab[][MAX_ROZM], int m, int n) { // wypisuje tablice dwuwymiarowa w postaci macierzy m x n
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%.3f\t", tab[i][j]);
		}
		putchar('\n');
	}
}

void wypisz_od_poczatku_int_2W(int tab[][MAX_ROZM], int m, int n) { // wypisuje tablice dwuwymiarowa w postaci macierzy m x n
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%d\t", tab[i][j]);
		}
		putchar('\n');
	}
}

void wypisz_transponowana_2W(double tab[][MAX_ROZM], int m, int n) { // wypisuje macierz transponowana n x m
	for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				printf("%g\t", tab[j][i]);
			}
			putchar('\n');
	}
}

double losuj_liczbe_z_przedzialu(int g_dolna, int g_gorna) { // losuje liczbe rzeczywista z zadanego przedzialu (granica dolna, granica gorna)
	double y;
	if (g_dolna < 0 && g_gorna < 0) {
		y = rand() / (double)RAND_MAX * ((double)g_gorna - (double)g_dolna) - fabs((double)g_dolna);
	}
	else if (g_dolna < 0 && g_gorna > 0) {
		y = rand() / (double)RAND_MAX * ((double)g_gorna - (double)g_dolna) - fabs((double)g_dolna);
	}
	else { // g_dolna, g_gorna >= 0
		y = rand() / (double)RAND_MAX * ((double)g_gorna - (double)g_dolna) + fabs((double)g_dolna);
	}
	return y;
}

int losuj_zero_lub_jeden(void) {
	int liczba = rand() % 2;
	return liczba;
}

void tab_liczb_pseudolosowych_z_przedzialu(double tab[][MAX_ROZM], int m, int n, int g_dolna, int g_gorna) { // wypelnia tablice rozmiaru m x n liczbami pseudolosowymi z zadanego przedzialu
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			double liczba = losuj_liczbe_z_przedzialu(g_dolna, g_gorna);
			tab[i][j] = liczba;
		}
	}
}

void tab_0_1(int tab[][MAX_ROZM], int m, int n) { // wypelnia tablice rozmiaru m x n zerami i jedynkami
	int wybor = czy_losowanie();
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			int liczba = -1;
			if (wybor == 0) {
				printf("element[%d][%d] = ", i, j);
				liczba = wczytaj_int_ograniczone(MIN, JEDEN);
			}
			else if (wybor == 1) {
				liczba = losuj_zero_lub_jeden();
			}
			tab[i][j] = liczba;
		}
	}
}

double element_maksymalny_tab_2W(double tab[][MAX_ROZM], int m, int n) {
	double max = INT_MIN;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (tab[i][j] > max)
				max = tab[i][j];
		}
	}
	return max;
}

_Bool dokladnie_jedna_jedynka_wiersz(int tab[][MAX_ROZM], int m, int n) {
	_Bool jedna_jedynka = true;
	for (int i = 0; i < m; ++i) {
		int ile = 0; //ile jedynek znalezlismy w jednym wierszu
		for (int j = 0; j < n; ++j) {
			if (tab[i][j] == 1)
				++ile;
		}
		if (ile != 1)
			jedna_jedynka = false;
	}
	return jedna_jedynka;
}

_Bool dokladnie_jedna_jedynka_kol(int tab[][MAX_ROZM], int m, int n) {
	_Bool jedna_jedynka = true;
	for (int i = 0; i < n; ++i) {
		int ile = 0; //ile jedynek znalezlismy w jednej kolumnie
		for (int j = 0; j < m; ++j) {
			if (tab[j][i] == 1) {
				++ile;
			}
		}
		if (ile != 1)
			jedna_jedynka = false;
	}
	return jedna_jedynka;
}

double suma_elementow_tabeli_2W(double tab[][MAX_ROZM], int m, int n) {
	double suma = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j){
			suma += tab[i][j];
			}
	}
	return suma;
}

double suma_z_glownej_przekatnej(double tab[][MAX_ROZM], int m) {
	double suma = 0;
	for (int i = 0; i < m; ++i) {
		suma += tab[i][i];
	}
	return suma;
}

double suma_powyzej_glownej_przekatnej(double tab[][MAX_ROZM], int m) {
	double suma = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = i + 1; j < m; ++j) {
			suma += tab[i][j];
		}
	}
	return suma;
}

double niekwadrat_suma_z_glownej_przekatnej(double tab[][MAX_ROZM], int m, int n) {
	int k = (m < n) ? m : n;
	double suma = 0;
	for (int i = 0; i < k; ++i) {
		printf("\n tab[%d][%d] = %g\n", i, i, tab[i][i]);
		suma += tab[i][i];
	}
	return suma;
}

double niekwadrat_suma_powyzej_glownej_przekatnej(double tab[][MAX_ROZM], int m, int n) {
	int k = (m < n) ? m : n;
	double suma = 0;
	for (int i = 0; i < k; ++i) {
		for (int j = i + 1; j < n; ++j) {
			printf("\n tab[%d][%d] = %g\n", i, j, tab[i][j]);
			suma += tab[i][j];
		}
	}
	return suma;
}

double niekwadrat_suma_ponizej_glownej_przekatnej(double tab[][MAX_ROZM], int m, int n) {
	double suma = 0;
	for (int i = 1; i < m; ++i) {
		for (int j = 0; j <= i - 1 && j < n; ++j) {
			printf("\n tab[%d][%d] = %g\n", i, j, tab[i][j]);
			suma += tab[i][j];
		}
	}
	return suma;
}

void transponuj_2W(double tab_we[][MAX_ROZM], double tab_wy[][MAX_ROZM], int m, int n) { // wypisuje macierz transponowana n x m

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			tab_wy[j][i] = tab_we[i][j];
		}
	}
}

void zamien_wiersze(double tab[][MAX_ROZM], int m, int n) {
	int wiersz1, wiersz2;
	//losowanie albo wczytywanie numeu wiersza
	printf("\n/*Wiersze numerowane sa od 0 do %d*/\n", m-1);
	printf("Podaj pierwszy wiersz, ktory chcesz zamienic: ");

	wiersz1 = wczytaj_int_ograniczone(0, m-1);
	printf("Podaj drugi wiersz: ");
	wiersz2 = wczytaj_int_ograniczone(0, m-1);
	//zamiana
	double pom; // tu zapisujê element, na którego miejsce coœ przepisujê
	for (int i = 0; i < m; ++i) {
		pom = tab[wiersz1][i];
		tab[wiersz1][i] = tab[wiersz2][i];
		tab[wiersz2][i] = pom;
	}
}

void wypelnij_1W(double tab[], int n, int min, int max) {
	int pom = 0;
	do {
		printf("Podaj element tab[%d] ", pom);
		double liczba = wczytaj_rzeczywista_ograniczone(min, max);
		int spr = 0;
		for (int i = 0; i < n; ++i) {
			if (tab[i] != liczba) {
				++spr;
			}
		}
		if (spr == ILE) {
			tab[pom] = liczba;
			++pom;
		}
		else
			printf("Taka liczbe juz podano. Ponow probe. ");
	} while (pom != ILE);
}

//
//void zadania(void) {
//	//Zadanie 87.
//	info87();
//	printf("Podaj rozmiary macierzy:\n");
//	int liczba_wierszy, liczba_kolumn; //rozmiar macierzy podany przez uzytkownika
//	printf("m: ");
//	liczba_wierszy = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	printf("n: ");
//	liczba_kolumn = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	printf("\nPodaj elementy macierzy o %d wierszach i %d kolumnach.\n\n", liczba_wierszy, liczba_kolumn);
//	double macierz[MAX_ROZM][MAX_ROZM]; //macierz, ktora uzytkownik bedzie uzupelniac, a my ja wypiszemy
//	wypelnianie_tablicy(macierz, liczba_wierszy, liczba_kolumn, G_DOLNA, G_GORNA);
//	wypisz_od_poczatku_2W(macierz, liczba_wierszy, liczba_kolumn);
//	printf("\n\nKoniec programu.\n\n");
//	//Zadanie 88.
//	info88();
//	printf("Podaj rozmiary macierzy:\n");
//	int liczba_wierszy, liczba_kolumn; //rozmiar macierzy podany przez uzytkownika
//	printf("m: ");
//	liczba_wierszy = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	printf("n: ");
//	liczba_kolumn = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	printf("\nPodaj elementy macierzy o %d wierszach i %d kolumnach.\n\n", liczba_wierszy, liczba_kolumn);
//	double macierz[MAX_ROZM][MAX_ROZM]; //macierz, ktora uzytkownik bedzie uzupelniac, a my ja wypiszemy
//	wypelnianie_tablicy(macierz, liczba_wierszy, liczba_kolumn, G_DOLNA, G_GORNA);
//	wypisz_od_poczatku_2W(macierz, liczba_wierszy, liczba_kolumn);
//	printf("\nA to powyzsza macierz z zamienionymi wierszami z kolumnami (transponowana):\n");
//	wypisz_transponowana_2W(macierz, liczba_wierszy, liczba_kolumn);
//	printf("\n\nKoniec programu.\n\n");
//	//Zadanie 89.
//	srand((unsigned)time(NULL));
//	info89();
//	printf("Podaj rozmiary macierzy:\n");
//	int liczba_wierszy, liczba_kolumn; //rozmiar macierzy podany przez uzytkownika
//	printf("m: ");
//	liczba_wierszy = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	printf("n: ");
//	liczba_kolumn = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	double tab_pseudo[MAX_ROZM][MAX_ROZM];
//	wypelnianie_tablicy(tab_pseudo, liczba_wierszy, liczba_kolumn, G_DOLNA, G_GORNA);
//	wypisz_od_poczatku_2W(tab_pseudo, liczba_wierszy, liczba_kolumn);
//	double maksimum = element_maksymalny_tab_2W(tab_pseudo, liczba_wierszy, liczba_kolumn);
//	printf("\n\nOto maksymalny element tablicy: %f", maksimum);
//	printf("\n\nKoniec programu.\n\n");
//	printf("\n\n/////////////////////////////////////////////////////////////////////\n\n");
//	//Zadanie 90.
//	info90();
//	srand((unsigned)time(NULL));
//	printf("Podaj rozmiary macierzy:\n");
//	int liczba_wierszy, liczba_kolumn; //rozmiar macierzy podany przez uzytkownika
//	printf("m: ");
//	liczba_wierszy = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	printf("n: ");
//	liczba_kolumn = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	int tab_losowe_0_1[MAX_ROZM][MAX_ROZM];
//	tab_0_1(tab_losowe_0_1, liczba_wierszy, liczba_kolumn);
//	printf("\nOto tablica zer i jedynek rozmiaru %d x %d.\n\n", liczba_wierszy, liczba_kolumn);
//	wypisz_od_poczatku_int_2W(tab_losowe_0_1, liczba_wierszy, liczba_kolumn);
//	int jedynka_w, jedynka_k;
//	jedynka_w = dokladnie_jedna_jedynka_wiersz(tab_losowe_0_1, liczba_wierszy, liczba_kolumn);
//	jedynka_k = dokladnie_jedna_jedynka_kol(tab_losowe_0_1, liczba_wierszy, liczba_kolumn);
//	if (jedynka_w == 1 && jedynka_k == 1) {
//		printf("\nW kazdym wierszu i w kazdej kolumnie jest dokladnie jedna jedynka.\n");
//	}
//	else {
//		printf("\nNieprawda, ze w kazdym wierszu i w kazdej kolumnie jest dokladnie jedna jedynka.\n");
//	}
//	printf("\n\nKoniec programu.\n\n");
//	//Zadanie 91.
//	info91();
//	srand((unsigned)time(NULL));
//	printf("Podaj rozmiary macierzy:\n");
//	int liczba_wierszy, liczba_kolumn; //rozmiar macierzy podany przez uzytkownika
//	printf("m: ");
//	liczba_wierszy = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	printf("n: ");
//	liczba_kolumn = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	double tab_pseudo[MAX_ROZM][MAX_ROZM];
//	wypelnianie_tablicy(tab_pseudo, liczba_wierszy, liczba_kolumn, G_DOLNA, G_GORNA);
//	wypisz_od_poczatku_2W(tab_pseudo, liczba_wierszy, liczba_kolumn);
//	double suma = suma_elementow_tabeli_2W(tab_pseudo, liczba_wierszy, liczba_kolumn);
//	printf("\n\nOto suma wyrazow macierzy: %f", suma);
//	printf("\n\nKoniec programu.\n\n");
//	printf("\n\n/////////////////////////////////////////////////////////////////////\n\n");
//	//Zadanie 92.
//	info92();
//	srand((unsigned)time(NULL));
//	printf("Podaj rozmiar macierzy:\n");
//	int liczba_wierszy, liczba_kolumn; //rozmiar macierzy podany przez uzytkownika
//	printf("m: ");
//	liczba_wierszy = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	liczba_kolumn = liczba_wierszy;
//	double tab_pseudo[MAX_ROZM][MAX_ROZM];
//	wypelnianie_tablicy(tab_pseudo, liczba_wierszy, liczba_kolumn, G_DOLNA, G_GORNA);
//	wypisz_od_poczatku_2W(tab_pseudo, liczba_wierszy, liczba_kolumn);
//	double suma = suma_z_glownej_przekatnej(tab_pseudo, liczba_wierszy);
//	printf("\n\nOto suma wyrazow z glownej przekatnej macierzy: %f", suma);
//	printf("\n\n/////////////////////////////////////////////////////////////////////\n\n");
//	printf("\n\nKoniec programu.\n\n");
//	//Zadanie 93.
//	info93();
//	srand((unsigned)time(NULL));
//	printf("Podaj rozmiar macierzy:\n");
//	int liczba_wierszy, liczba_kolumn; //rozmiar macierzy podany przez uzytkownika
//	printf("m: ");
//	liczba_wierszy = wczytaj_int_ograniczone(MIN, MAX_ROZM);
//	liczba_kolumn = liczba_wierszy;
//	double tablica[MAX_ROZM][MAX_ROZM];
//	wypelnianie_tablicy(tablica, liczba_wierszy, liczba_kolumn, G_DOLNA, G_GORNA);
//	wypisz_od_poczatku_2W(tablica, liczba_wierszy, liczba_kolumn);
//	double suma = suma_powyzej_glownej_przekatnej(tablica, liczba_wierszy);
//	printf("\n\nOto suma wyrazow powyzej glownej przekatnej macierzy: %f", suma);
//	printf("\n\n/////////////////////////////////////////////////////////////////////\n\n");
//	printf("\n\nKoniec programu.\n\n");
// }


int main() {
	//// Suma powy¿ej i poni¿ej g³ównej przek¹tnej, dla tablic niekwadratowych, optymalnym sposobem (bez wielokrotnych porównañ).
	//srand((unsigned)time(NULL));

	//printf("Program liczy sume wyrazow na przekatnej, powyzej i ponizej przekatnej dowolnej macierzy");
	//printf("Podaj rozmiary macierzy:\n");
	//int liczba_wierszy, liczba_kolumn; //rozmiar macierzy podany przez uzytkownika
	//printf("m: ");
	//liczba_wierszy = wczytaj_int_ograniczone(MIN, MAX_ROZM);
	//printf("n: ");
	//liczba_kolumn = wczytaj_int_ograniczone(MIN, MAX_ROZM);
	//double tab_pseudo[MAX_ROZM][MAX_ROZM];
	/*double tab_transponowana[MAX_ROZM][MAX_ROZM];
	wypelnianie_tablicy(tab_pseudo, liczba_wierszy, liczba_kolumn, G_DOLNA, G_GORNA);
	wypisz_od_poczatku_2W(tab_pseudo, liczba_wierszy, liczba_kolumn);

	double suma_ponizej = niekwadrat_suma_ponizej_glownej_przekatnej(tab_pseudo, liczba_wierszy, liczba_kolumn);
	printf("\n\nOto suma wyrazow ponizej glownej przekatnej macierzy: %f.\n\n", suma_ponizej);

	double suma_powyzej = niekwadrat_suma_powyzej_glownej_przekatnej(tab_pseudo, liczba_wierszy, liczba_kolumn);
	printf("\n\nOto suma wyrazow powyzej glownej przekatnej macierzy: %f.\n\n", suma_powyzej);
	double suma_z_przekatnej = niekwadrat_suma_z_glownej_przekatnej(tab_pseudo, liczba_wierszy, liczba_kolumn);
	printf("\n\nOto suma wyrazow z glownej przekatnej macierzy: %f.\n\n", suma_z_przekatnej);

	printf("\n\nWczytana macierz:\n\n");
	wypisz_od_poczatku_2W(tab_pseudo, liczba_wierszy, liczba_kolumn);
	transponuj_2W(tab_pseudo, tab_transponowana, liczba_wierszy, liczba_kolumn);
	printf("\n\nMacierz transponowana:\n\n");
	wypisz_od_poczatku_2W(tab_transponowana, liczba_kolumn, liczba_wierszy);*/
	/*printf("Oto wylosowana macierz: \n\n");
	wypelnianie_tablicy(tab_pseudo, liczba_wierszy, liczba_kolumn, G_DOLNA, G_GORNA);
	wypisz_od_poczatku_2W(tab_pseudo, liczba_wierszy, liczba_kolumn);
	zamien_wiersze(tab_pseudo, liczba_wierszy, liczba_kolumn);
	wypisz_od_poczatku_2W(tab_pseudo, liczba_wierszy, liczba_kolumn);*/

	double tab[ILE + 1];
	wypelnij_1W(tab, ILE, -1, 1);
	printf("\n\nKoniec programu.\n\n");
	return 0;
}