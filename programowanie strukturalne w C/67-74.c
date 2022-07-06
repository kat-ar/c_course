#include<stdio.h>
#include<math.h>

//lista funkcji
//info
void informacje67(void) {
	printf("Zadanie 67. Program wypisuje na ekran tylko gwiazdek *, ile zechce uzytkownik.\nAutorka: Katarzyna Arent.\n\n");
}
void informacje68(void) {
	printf("Program rysuje kwadrat z gwiazdek.\n");
	printf("Autorka: Katarzyna Arent\n\n");
}
void informacje69(void) {
	printf("Program rysuje prostokat z gwiazdek.\n");
	printf("Autorka: Katarzyna Arent\n\n");
}
void informacje70(void) {
	printf("Program rysuje trojkat z gwiazdek, np po podaniu liczby 4 otrzymasz:\n*\n**\n***\n****\n");
	printf("Autorka: Katarzyna Arent\n\n");
}
void informacje71(void) {
	printf("Program rysuje trojkat z gwiazdek, np po podaniu liczby 4 otrzymasz:\n   *\n  ***\n *****\n*******\n");
	printf("Autorka: Katarzyna Arent\n\n");
}
void informacje72(void) {
	printf("Program wypisuje tabliczke mnozenia w zakresie podanym przez uzytkownika.\n");
	printf("Autorka: Katarzyna Arent\n\n");
}
void informacje73(void) {
	printf("Program wypisuje tablice znakow ASCII.\n");
	printf("Autorka: Katarzyna Arent\n\n");
}
void informacje74(void) {
	printf("Program oblicza pewna tajemnicza sume.\n");
	printf("Autorka: Katarzyna Arent\n\n");
}
int wczytaj_naturalna(void) { //wczytywanie przy pomocy scanf_s z kontrol¹ poprawnoœci
	int liczba;
	while (scanf_s("%d", &liczba) != 1 && liczba <= 0 && getchar() != '\n') {
		printf("Bledna liczba. Popraw: ");
		while (getchar() != '\n')
			;
	}
	return liczba;
}
//pomocnicze do zliczania liczby wypisywanych znaków
int szereg(int n) { //szereg 1+2+3+...
	int suma = 0; //suma szeregu
	for (int i = 0; i <= n; ++i) {
		suma += i;
	}
	return suma;
}
int szereg2(int n) { // szereg 1+3+5+...
	int suma = 0; //suma szeregu
	for (int i = 1; i <= n; ++i) {
		suma += 2*i-1;
	}
	return suma;
}
//suma do zadania 74: 1 + 22 + 333 + ...
int tajemnicza_suma(int n) {
	int suma = 1;
	int skladnik = 1;
	printf("%d", skladnik);
	for (int i = 1; i < n; ++i) {
		skladnik += pow(10, i);
		printf(" + %d", skladnik*(i+1));
		suma += skladnik*(i+1);
	}
	printf(" = %d", suma);
	return suma;
}
//rysowanie kszta³tów przy u¿yciu znaków
void rysuj_linie(int ile) {
	for (int i = 0; i < ile; ++i) {
		putchar('*');
	}
}
void rysuj_kwadrat(int ile) {
	for (int i = 0; i < ile; ++i) { // rysowanie ile gwiazdek
		rysuj_linie(ile);
		putchar('\n');
	}
}
void rysuj_kwadrat2(int ile) {
	for (int i = 0; i < ile; ++i) { // rysowanie ile gwiazdek
		for (int j = 0; j < ile; ++j) {
			putchar('*');
		}
		putchar('\n');
	}
}
void rysuj_prostokat(int ile) {
	for (int i = 0; i < ile; ++i) { // rysowanie ile gwiazdek
		rysuj_linie(ile*2);
		putchar('\n');
	}
}
void rysuj_prostokat2(int ile) {
	for (int i = 0; i < ile; ++i) { // rysowanie ile gwiazdek
		for (int j = 0; j < ile*2; ++j) {
			putchar('*');
		}
		putchar('\n');
	}
}
void rysuj_trojkat_p(int ile) { //trójk¹t prostok¹tny przyklejony do œciany, wierzcho³ek w górze
	for (int i = 1; i <= ile; ++i) {
		for (int j = 1; j <= i; ++j) {
			putchar('*');
		}
		putchar('\n');
	}
}
void rysuj_linie2(int ile, char co) { //u¿ywaj¹c funkcji rysuj_linie2 mo¿na podaæ jej dowolny char co który ma rysowaæ
	for (int i = 0; i < ile; ++i) {
		putchar(co);
	}
}
void rysuj_trojkat_r(int ile) { //trójk¹t równoramienny, wierzcho³ek w górze
	for (int i = 1; i <= ile; ++i) {
		rysuj_linie2(ile - i, ' ');//rysowanie spacji
		rysuj_linie2(2 * i - 1, '*'); //rysowanie gwiazdek
		putchar('\n');
	}
}
void tabliczka_mnozenia(int ile) {
	// wypisywanie wiersza nag³ówkowego
	printf("%6s", " ");
	for (int i = 1; i <= ile; ++i) {
		printf("%4d", i);
	}
	putchar('\n');
	//wypisanie linii z kresek
	for (int i = 1; i <= 4*ile+6; ++i) {
		printf("%c", '-');
	}
	putchar('\n');
	for (int i = 1; i <= ile; ++i) {
		//wypisanie nru wiersza i pionowej kreski
		printf("%4d |", i);
		for (int j = 1; j <= ile; ++j) {
			// wypisz zawartoœæ wiersza
			printf("%4d", i * j);
		}
		putchar('\n');
	}

}
void tabela_ascii(int kod, char znak) { //tabela "zwyk³ych" znaków
	printf("%4d %-4c", kod, znak);
	putchar('\n');
}
void ascii_control(void) { // próbowa³am tu zrobiæ skrótow¹ wersjê ale mi siê nie uda³o do koñca
	int kody[] = { 0, 7, 8, 9, 10, 11, 12, 13, 26, 27, 127 };
	char* skroty[] = { "nul", "bel", "bs", "ht", "nl", "vt", "np", "cr", "eof", "esc", "del" };
	printf("%4s %-4s\n", "kod", "znak");
	/*for (int i = 0; i < sizeof(kody) / sizeof(int); ++i) {
		printf("%4d %-4s", kody[i], skroty[i]);
		putchar('\n');
	}*/
}
void ascii_full(void) { // pe³na tabela
	printf("%4s %-4s\n", "kod", "znak");
	for (int n = 0; n <= 255; ++n) {
		switch (n) { //obs³uga znaków kontrolnych
		case 0:
			printf("%4d %-4s", n, "nul");
			putchar('\n');
			break;
		case 7:
			printf("%4d %-4s", n, "bel");
			putchar('\n');
			break;
		case 8:
			printf("%4d %-4s", n, "bs");
			putchar('\n');
			break;
		case 9:
			printf("%4d %-4s", n, "ht");
			putchar('\n');
			break;
		case 10:
			printf("%4d %-4s", n, "nl");
			putchar('\n');
			break;
		case 11:
			printf("%4d %-4s", n, "vt");
			putchar('\n');
			break;
		case 12:
			printf("%4d %-4s", n, "np");
			putchar('\n');
			break;
		case 13:
			printf("%4d %-4s", n, "cr");
			putchar('\n');
			break;
		case 26:
			printf("%4d %-4s", n, "eof");
			putchar('\n');
			break;
		case 27:
			printf("%4d %-4s", n, "esc");
			putchar('\n');
			break;
		case 127:
			printf("%4d %-4s", n, "del");
			putchar('\n');
			break;
		default: //drukowanie wszystkich nie-specjalnych znaków
			tabela_ascii(n, n);
			break;
		}
		
	}
	putchar('\n'); // rysowanie entera
}
int main() {
	//Zadanie 67.
	//info
	informacje();
	//wczytanie liczby gwiazdek
	int liczbaGwiazdek;
	printf("Podaj liczbe gwiazdek, ktore program ma wypisac: ");
	liczbaGwiazdek = wczytaj_naturalna();
	//narysowanie jednej linii
	printf("\nLinia zlozona z %d gwiazd%s:\n\n", liczbaGwiazdek, liczbaGwiazdek == 1 ? "ki" : "ek");
	rysuj_linie(liczbaGwiazdek);
	putchar('\n');
	//zakonczenie
	printf("\nKoniec programu.\n");

	////kod dr DD
	//// info
	//printf("Program rysuje linie gwiazdek.\n");
	//printf("Autor: ...\n\n");
	//// wczytanie liczby gwiazdek
	//int n; // liczba gwiazdek
	//printf("Podaj ile gwiazdek chcesz narysowac:\t");
	//while (scanf_s("%d", &n) != 1 || n <= 0 || getchar() != '\n') {
	//	printf("Bledne dane. Popraw:\t\t");
	//	while (getchar() != '\n')
	//		;
	//}
	//// narysowanie 1 linii
	//printf("\nLinia zlozona z %d gwiazd%s:\n\n", n, n == 1 ? "ki" : "ek");
	//for (int i = 0; i < n; ++i) { // rysowanie n gwiazdek
	//	putchar('*');
	//}
	//putchar('\n'); // rysowanie entera
	//// zakonczenie
	//printf("\n\nKoniec programu.\n");

	//Zadanie 68.
	// info
	informacje68();
	// wczytanie liczby gwiazdek
	int n; // liczba gwiazdek w jednym rzedzie
	printf("Podaj ile gwiazdek chcesz narysowac:\t");
	n = wczytaj_naturalna();
	// narysowanie kwadratu
	printf("\nKwadrat zlozony z %d gwiazd%s:\n\n", n*n, n == 1 ? "ki" : "ek");
	rysuj_kwadrat(n); //mo¿na podmieniæ na rysuj_kwadrat2(n);
	putchar('\n'); // rysowanie entera
	// zakonczenie
	printf("\n\nKoniec programu.\n");

	//Zadanie 69.
	// info
	informacje69();
	// wczytanie liczby gwiazdek
	int n; // liczba gwiazdek w jednym rzedzie
	printf("Podaj ile rzedow gwiazdek chcesz narysowac:\t");
	n = wczytaj_naturalna();
	// narysowanie prostokata
	printf("\nProstokat zlozony z %d gwiazd%s:\n\n", n * n * 2, n == 1 ? "ki" : "ek");
	rysuj_prostokat2(n); //mo¿na podmieniæ na rysuj_prostokat(n);
	putchar('\n'); // rysowanie entera
	// zakonczenie
	printf("\n\nKoniec programu.\n");

	//Zadanie 70.
	// info
	informacje70();
	// wczytanie liczby gwiazdek
	int n; // liczba gwiazdek w jednym rzedzie
	printf("Podaj ile rzedow gwiazdek chcesz narysowac:\t");
	n = wczytaj_naturalna();
	// narysowanie trojkata
	printf("\Trojkat zlozony z %d gwiazd%s:\n\n", szereg(n), n == 1 ? "ki" : "ek");
	rysuj_trojkat_p(n);
	putchar('\n'); // rysowanie entera
	// zakonczenie
	printf("\n\nKoniec programu.\n");

	//Zadanie 71.
	// info
	informacje71();
	// wczytanie liczby gwiazdek
	int n; // liczba gwiazdek w jednym rzedzie
	printf("Podaj ile rzedow gwiazdek chcesz narysowac:\t");
	n = wczytaj_naturalna();
	// narysowanie trojkata
	printf("\Trojkat zlozony z %d gwiazd%s:\n\n", szereg2(n,2), n == 1 ? "ki" : "ek");
	rysuj_trojkat_r(n);
	putchar('\n'); // rysowanie entera
	// zakonczenie
	printf("\n\nKoniec programu.\n");

	//Zadanie 72.
	// info
	informacje72();
	// wczytanie liczby gwiazdek
	int n; // liczba gwiazdek w jednym rzedzie
	printf("Podaj ile rzedow tabliczki mnozenia chcesz miec: ");
	n = wczytaj_naturalna();
	// narysowanie prostokata
	printf("\Tablicza mnozenia do %d:\n\n", n*n);
	tabliczka_mnozenia(n);
	putchar('\n'); // rysowanie entera
	// zakonczenie
	printf("\n\nKoniec programu.\n");

	//Zadanie 73.
	// info
	informacje73();
	// wypisanie tablicy
	ascii_full();
	// zakonczenie
	printf("\n\nKoniec programu.\n");

	//Zadanie 74.
	//info
	informacje74();
	//wczytanie liczby
	int n;
	printf("Podaj dlugosc sumy (z zakresu 1-9): ");
	n = wczytaj_naturalna();
	//obliczenie sumy
	int suma;
	suma = tajemnicza_suma(n);
	//zakonczenie
	printf("\n\nKoniec programu.\n");

	return 0;
}