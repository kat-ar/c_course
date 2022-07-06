#include<stdio.h>
#include<math.h>

#define MIN 0
#define MAX 100
enum { false, true };

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
/** Oblicza dwumian Newtona dla podanych liczb calkowitych n oraz k.
*
* @param n to gorna liczba symbolu
* @param k to dolna liczba symbolu
*/
int dwumian_Newtona(int n, int k);
/** Rysuje trojkat Pascala dla n liczb.
*
* @param n to ilosc liczn
*/
void trojkat_Pascala(int n);

void info82(void) {
	printf("Zadanie 82.\nProgram pobiera od uzytkownika n liczb, a nastepnie wypisuje komunikat, jesli wsrod nich jest para jednakowych.\n");
	printf("Autorka: Katarzyna Arent.\n\n");
}

void info83(void) {
	printf("Zadanie 83.\nProgram oblicza wartosc wielomianu w(x) = a0 + a1x+ a2x^2 + ... + anx^n,\n");
	printf("dla podanych przez uzytkownika wartosci a - wspolczynnikow, n - stopnia wielomianu\ni x - punktu, w ktorym chce poznac jego wartosc.\n");
	printf("Autorka: Katarzyna Arent.\n\n");
}

void info84(void) {
	printf("Zadanie 84.\nProgram rysuje trojkat Pascala wielkosci n.\n");
	printf("Autorka: Katarzyna Arent.\n\n");
}

void info85(void) {
	printf("Zadanie 85.\nProgram rysuje trojkat Pascala wielkosci n.\n");
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

float wczytaj_rzeczywista(void) { //wczytywanie przy pomocy scanf_s z kontrol¹ poprawnoœci
	float liczba;
	while (scanf_s("%f", &liczba) != 1 || getchar() != '\n') {
		printf("Bledna liczba. Popraw: ");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

int wczytaj_int_ograniczone(int g_dolna, int g_gorna) {
	printf("(maksymalnie %d): ", g_gorna);
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || (liczba < g_dolna || liczba > g_gorna) || getchar() != '\n') {
		printf("Bledna liczba. Popraw: ");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

void wczytaj_int_1W(int* tab, int n) {
	for (int i = 0; i < n; ++i) {
		printf("liczba %d: ", i + 1);
		int liczba = wczytaj_naturalna();
		tab[i] = liczba;
	}
}

void wczytaj_int_1W_wsp(int* tab, int n) { //tablica wspolczynnikow do zad 83
	for (int i = 0; i <= n; ++i) {
		printf("a%d: ", i);
		int liczba = wczytaj_naturalna();
		tab[i] = liczba;
	}
}

void wypisz_od_poczatku(int* tab, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d\t", tab[i]);
	}
}

void wypisz_od_poczatku_bez_zer(int* tab, int n) {
	for (int i = 0; i < n; i++) {
		if (tab[i] != 0)
			printf("%4d ", tab[i]);
	}
}

void wypisz_od_poczatku_float(float* tab, int n) {
	for (int i = 0; i < n; i++) {
		printf("%g\t", tab[i]);
	}
}

float suma_tablicy(float* tab, int n) {
	float liczba = 0;
	for (int i = 0; i <= n; ++i) {
		liczba += tab[i];
	}
	return liczba;
}

void tablica_poteg(float* tab, float x, int n) {
	tab[0] = 1.0;
	tab[1] = x;
	for (int i = 1; i <= n; ++i) {
		tab[i+1] = x * tab[i];
	}
}

float wielomian(float* wielomian, int* tab_wsp, float* tab_pot, int n) {
	for (int i = 0; i <= n; ++i) {
		wielomian[i] = tab_wsp[i] * tab_pot[i];
	}
	float wynik;
	wynik = suma_tablicy(wielomian, n);
	return wynik;
}

_Bool czy_jest_para(int* tab, int n) {
	_Bool para = false;
	for (int i = 0; i < n; ++i) {
		int wybrany = tab[i];
		for (int j = i+1; j < n; ++j)
			if (tab[j] == wybrany){
				para = true;
				break;
			}
	}
	return para;
}

int dwumian_Newtona(int n, int k) {
	unsigned int wynik = 1;
	for (int i = 1; i <= n - k; ++i) {
		wynik = wynik * (k + i) / i;
	}
	return wynik;
}

void trojkat_Pascala(int n) {
	for (int j = 0; j <= n; ++j) {
		for (int i = 0; i <= j; ++i) {
			printf("%9d", dwumian_Newtona(j, i));
		}
		putchar('\n');
	}
	
}

int oblicz_element(int* tab, int n) {
	int element = 0;
	element = tab[n] + tab[n-1];
	return element;
}

void wczytaj_int_1W_od_konca(int* tab, int n) {
	for (int i = n; i >= 0 ; --i) {
		int liczba = oblicz_element(tab, i);
		if (i == 0)
			tab[i] = 1;
		else
			tab[i] = liczba;
	}
}

void trojkat_Pascala_2(int* tab, int n) {
	for (int j = 0; j < n; ++j) {
		wczytaj_int_1W_od_konca(tab, n);
		wypisz_od_poczatku_bez_zer(tab, n+1);
		putchar('\n');
		
	}
}

main() {
	//Zadanie 82.
	info82();
	printf("Ile liczb chcesz podac (maksymalnie 100): ");
	int n = wczytaj_int_ograniczone(MIN, MAX);
	int tab[MAX];
	wczytaj_int_1W(tab, n);
	printf("Podano liczby: ");
	wypisz_od_poczatku(tab, n);
	if (czy_jest_para(tab, n) == true) {
		printf("\nWsrod nich znajduje sie para jednakowych.\n");
	}
	else
		printf("\nWszystkie podane liczby sa unikatowe.\n");
	printf("\n\nKoniec programu.\n\n");
	//Zadanie 83.
	info83();
	printf("Podaj stopien wielomianu: ");
	int stopien = wczytaj_int_ograniczone(MIN, MAX);
	printf("Podaj wspolczynniki a0 - a%d\n", stopien);
	int wspolczynniki[MAX+1];
	wczytaj_int_1W_wsp(wspolczynniki, stopien);
	printf("\nwczytane wspolczynniki:\n");
	for (int i = 0; i <= stopien; i++) {
		printf("a%d\t", i);
	}
	putchar('\n');
	wypisz_od_poczatku(wspolczynniki, stopien+1);
	putchar('\n');
	printf("Podaj punkt w (liczbe rzeczywista, czyli np 0.98): ");
	float x = wczytaj_rzeczywista();
	printf("\nwczytany punkt x = %g\n", x);
	float potegi_x[MAX + 1];
	tablica_poteg(potegi_x, x, stopien);
	printf("w(%g) = ", x);
	printf("%d ", wspolczynniki[0]);
	for (int i = 1; i <= stopien; i++) {
		printf("+ %d*x^%d ", wspolczynniki[i], i);
	}
	putchar('\n');
	float wiel[MAX + 1];
	printf("w(%g) = %g", x, wielomian(wiel, wspolczynniki, potegi_x, stopien));
	printf("\n\nKoniec programu.\n\n");
	//Zadanie 84.
	info84();
	printf("%d\n\n",dwumian_Newtona(29, 14));
	trojkat_Pascala(34);
	//Zadanie 85.
	info85();
	int tab[MAX + 1] = { 1, 0 };
	wypisz_od_poczatku_bez_zer(tab, MAX + 1);
	putchar('\n');
	trojkat_Pascala_2(tab, 15);
	putchar('\n');
	//Zadanie 86.
	/* nie zdazylam zrobic, ale we wskazowkach bylo napisane, ze jest nieobowiazkowe, i nalezy sie skupic na 85*/
	return 0;
}