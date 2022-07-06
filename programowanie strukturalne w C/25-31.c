#include <stdio.h>
#include <math.h>


main() {
	////Zadanie 25.
	///*
	//Program prosi o wciśnięcie klawisza i informuje, czy wciśnięto t, czy
	//inny klawisz.
	//Co jest błędem?:
	//- tre
	//- T
	//- t_
	//Napisać różne wersje programu.
	//*/
	//printf("Zadanie 25.\n");
	//printf("Program prosi o nacisniecie klawisza klawiatury, i rozstrzyga, czy podano znak 't', czy inny.\n");
	////Wersja 1: można podać tylko 't' (z dowolną liczbą znaków białych za nim)
	//printf("\nProsze podac dowolny znak z klawiatury: ");
	//if (getchar() == 't') {
	//	printf("Podano znak \'t\'.");
	//}
	//else
	//	printf("Podano znak inny niz \'t\'.");
	////Wersja 2: można podać tylko 't' (bez znaków białych)
	//printf("\nProsze podac dowolny znak z klawiatury: ");
	//if (getchar() == 't' && getchar() == '\n') {
	//	printf("Podano znak \'t\'.");
	//}
	//else
	//	printf("Podano znak inny niz \'t\'.");
	////Wersja 3: można podać 't' lub 'T' JESZCZE NIE DZIAŁA
	//printf("\nProsze podac dowolny znak z klawiatury: ");
	//if (getchar() == 't' || getchar() == 'T') {
	//	printf("Podano znak \'t\'.");
	//}
	//else
	//	printf("Podano znak inny niz \'t\'.");
	////Wersja 4: można podać znak 't' lub 'T' z dowolnym ciągiem znaków za nim
	//printf("\nProsze podac dowolny znak z klawiatury: ");
	//char znak;
	//scanf_s("%c", &znak);
	//if (znak == 't' || znak == 'T') {
	//	printf("Podano znak \'t\'.");
	//}
	//else
	//	printf("Podano znak inny niz \'t\'.");
	//printf("\nKoniec programu.\n");

	////Zadanie 26.
	///*
	//Program rozstrzyga, czy punkt podany przez użytkownika należy do koła o środku w (0,0) i promieniu 1
	//*/
	//float x, y;
	//printf("Zadanie 26.");
	//printf("\nProgram rozstrzyga, czy podany punkt nalezy do kola o srodku w punkcie (0,0) i promieniu 1.");
	//printf("\nPodaj wspolrzedne punktu, ktory chcesz sprawdzic.\nAkceptowany format: (x,y): ");
	//if (scanf_s("(%f,%f)", &x, &y) != 2) {
	//	printf("Podano bledne dane. ");
	//}
	//else {
	//	if ((sqrt(x * x + y * y)) <= 1) {
	//		printf("Punkt (%g,%g) nalezy do kola o srodku (0,0) i promieniu 1.\n", x, y);
	//	}
	//	else
	//		printf("Punkt (%g,%g) nie nalezy do kola o srodku (0,0) i promieniu 1.\n", x, y);
	//}
	//printf("Koniec programu.");

	////Zadanie 27.
	///*
	//Program rozstrzyga, czy punkt podany przez użytkownika leży:
	//wewnątrz
	//na zewnątrz
	//na
	//okręgu o środku w (0,0) i promieniu 1
	//*/
	//float a, b;
	//printf("Zadanie 27.");
	//printf("\nProgram rozstrzyga, czy podany punkt lezy wewnatrz, na, czy na zewnatrz okregu\no srodku w punkcie (0,0) i promieniu 1.");
	//printf("\nPodaj wspolrzedne punktu, ktory chcesz sprawdzic.\nAkceptowany format: (x,y): ");
	//if (scanf_s("(%f,%f)", &a, &b) != 2) {
	//	printf("Podano bledne dane. ");
	//}
	//else {
	//	if ((sqrt(a * a + b * b)) < 1) {
	//		printf("Punkt (%g,%g) lezy wewnatrz okregu o srodku (0,0) i promieniu 1.\n", a, b);
	//	}
	//	else if ((sqrt(a * a + b * b)) == 1) {
	//		printf("Punkt (%g,%g) lezy na okregu o srodku (0,0) i promieniu 1.\n", a, b);
	//	}
	//	else
	//		printf("Punkt (%g,%g) lezy na zewnatrz okregu o srodku (0,0) i promieniu 1.\n", a, b);
	//}
	//printf("Koniec programu.");

	////Zadanie 28.
	///*
	//Program rozstrzyga, czy punkt podany przez uzytkownika lezy w pierwszej cwiartce ukladu wspolrzednych.
	//*/
	//printf("Zadanie 28.");
	//printf("\nProgram rozstrzyga, czy punkt podany przez uzytkownika\nlezy w pierwszej cwiartce ukladu wspolrzednych.");
	//printf("\nPodaj wspolrzedne punktu, ktory chcesz sprawdzic.\nAkceptowany format: (x,y): ");
	//float w1, w2;
	//if (scanf_s("(%f,%f)", &w1, &w2) != 2) {
	//	printf("Podano bledne dane. ");
	//}
	//else {
	//	if (w1 > 0 && w2 > 0) {
	//		printf("Punkt (%g,%g) lezy w pierwszej cwiartce ukladu wspolrzednych.\n", w1, w2);
	//	}
	//	else
	//		printf("Punkt (%g,%g) lezy poza pierwsza cwiartka ukladu wspolrzednych.\n", w1, w2);

	//}
	//printf("Koniec programu.\n");

	////Zadanie 29.
	///*
	//Program rozstrzyga, w ktorej cwiartce, albo na ktorej osi, lezy podany przez uzytkownika punkt.
	//*/
	//printf("Zadanie 28.");
	//printf("\nProgram rozstrzyga, w ktorej czesci ukladu wspolrzednych lezy podany przez uzytkownika punkt.");
	//printf("\nPodaj wspolrzedne punktu, ktory chcesz sprawdzic.\nJesli chcesz sprawdzic liczbe wymierna, oddziel czesc calkowita od ulamkowej kropka, np. 5.33.\nAkceptowany format: (x,y): ");
	//float zm1, zm2; // (x,y)
	//if (scanf_s("(%f,%f)", &zm1, &zm2) != 2) {
	//	printf("Podano bledne dane. ");
	//}
	//else {
	//	if (zm1 >= 0) { // x >= 0
	//		if (zm1 == 0) {
	//			if (zm2 == 0)
	//				printf("Punkt lezy w srodku ukladu wspolrzednych.\n");
	//			else
	//				printf("Punkt lezy na osi OY.\n");
	//		}
	//		else // x > 0
	//			if (zm2 > 0)
	//				printf("Punkt lezy w pierwszej cwiartce.\n");
	//			else if (zm2 == 0)
	//				printf("Punkt lezy na osi OX.\n");
	//			else
	//				printf("Punkt lezy w czwartej cwiartce.\n");
	//	}
	//	else // x < 0
	//		if (zm2 == 0)
	//			printf("Punkt lezy na osi OX.\n");
	//		else if (zm2 > 0)
	//			printf("Punkt lezy w drugiej cwiartce.\n");
	//		else
	//			printf("Punkt lezy w trzeciej cwiartce.\n");
	//}
	//printf("Koniec programu.\n");

	////Zadanie 30.
	//printf("Zadanie 30.\n");
	//printf("Program prosi o podanie liczby, a nastepnie pisze, czy jest calkowita, a jesli nie, zaoklagra ja w dol do najblizszej liczby calkowitej.\n");
	//float liczba;
	//printf("Podaj liczbe z rozwinieciem dziesietnym: ");
	//if (scanf_s("%f", &liczba) != 1) {
	//	printf("Podano bledne dane. ");
	//}
	//else {
	//	int liczbaC = liczba;
	//	if ((liczba - liczbaC == 0)) {
	//		printf("Podano liczbe calkowita %g.\n", liczba);
	//	}
	//	else {
	//		printf("Podano liczbe wymierna %g, przy zaokragleniu w dol %g.\n", liczba, floor(liczba));
	//	}
	//}
	//printf("Koniec programu.\n");

	////Zadanie 31.
	///*
	//Program mowi, czy odcieta punktu nie nalezy do dziedziny albo czy punkt nalezy do wykresu funkcji,
	//albo leży nad lub pod wykresem funkcji.
	//f(x) = sqrt(|arccos(x) + (e^x / ln(x))|)
	//Df = (0,1)
	//*/
	//printf("Program sprawdza podany przez uzytkownika punkt ukladu wspolrzednych:\n");
	//printf("- czy jego odcieta nalezy do dziedziny funkcji,\n- czy punkt nalezy do wykresu funkcji,\n");
	//printf("- czy punkt lezy nad albo pod wykresem funkcji.\n");
	//printf("Sprawdzana funkcja: f(x) = sqrt(|arccos(x) + (e^x / ln(x))|).\n");
	//printf("Dziedzina funkcji: Df = (0,1).\n");
	//printf("\nPodaj wspolrzedne punktu, ktory chcesz sprawdzic.\nJesli chcesz sprawdzic liczbe wymierna, oddziel czesc calkowita od ulamkowej kropka, np. 5.33.\nAkceptowany format: (x,y): ");
	//float xx, yy; // (x,y)
	//if (scanf_s("(%f,%f)", &xx, &yy) != 2) {
	//	printf("Podano bledne dane. ");
	//}
	//else {
	//	float wartoscFunkcji = sqrt(fabs(acos(xx) + (exp(xx) / log(xx))));
	//	if (xx <= 0 || xx >= 1) {
	//		printf("Podany punkt nie nalezy do dziedziny funkcji.\n");
	//	}
	//	else { // xx jest pomiedzy 0 a 1
	//		printf("Podany punkt nalezy do dziedziny funkcji.\n");
	//		printf("Wartosc funkcji w podanym punkcie = %f.\n", wartoscFunkcji);
	//		if (yy < wartoscFunkcji) {
	//			printf("Punkt lezy ponizej wykresu funkcji.\n");
	//		}
	//		else if (yy > wartoscFunkcji) {
	//			printf("Punkt lezy powyzej wykresu funkcji.\n");
	//		}

	//		else {
	//			printf("Punkt nalezy do wykresu funkcji.\n");
	//		}
	//	}
	//}
	//printf("Koniec programu.\n");
	int u;
	/*printf("Testowanie instr. przypisania.\n\n");
	u = 3;*/
	/*printf("Po u=3;		wart. u jest %d\n", u);
	u = 5;
	printf("Po u=5;		wart. u jest %d\n", u);
	u+=2;
	printf("Po u+=2;		wart. u jest %d\n", u);
	u*=(u+1);
	printf("Po u*=(u+1);		wart. u jest %d\n", u);
	u+=1;
	printf("Po u+=1;		wart. u jest %d\n", u);
	u-=(3/4);
	printf("Po u-=(3/4);		wart. u jest %d\n", u);
	u/=(u+1);
	printf("Po u/=(u+1);		wart. u jest %d\n", u);
	u-=1;
	printf("Po u-=1;		wart. u jest %d\n", u);*/
	printf("\n\nKoniec programu.\n");

	return 0;
}
