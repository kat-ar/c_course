#include <stdio.h>

int main()
{
	//Zadanie 17. 
	/*Komentarz do dzia≥ania programu na testowanych b≥Ídnych wartoúciach:
	-5 - Wypisuje poprawnie
	asf - Wypisuje kod liczbowy.
	9.45 - Zaokrπgla do ca≥kowitej (obcina czÍúÊ u≥amkowπ).
	a45b - Wypisuje kod liczbowy.
	12345678912345678 - Podales liczbe: 1578423886
	Koniec programu.
	*/
	int liczba;
	printf("\nAutorka: Katarzyna Arent\n\n");
	printf("Zadanie 17.\n");
	printf("Program prosi o podanie liczby calkowitej i wypisuje ja na ekran.\n\n");
	printf("Podaj liczbe calkowita: ");
	(scanf_s("%d", &liczba));
	printf("Podales liczbe: %d\nKoniec programu.\n\n", liczba);

	//Zadanie 18.
	/*Komentarz do dzia≥ania programu na testowanych wartoúciach:
	-5: Podales liczbe: -5 OK
	9.45: Podales liczbe: 9.45 OK
	234.234 - Podales liczbe: 234.234 OK
	4.56e4 - Podales liczbe: 45600 èLE
	.3 - Podales liczbe: 0.3
	34e - Podales liczbe: -1.07374e+08
	e45 - Podales liczbe: -1.07374e+08
	-.2e - Podales liczbe: -1.07374e+08
	3.3 e1894 - Podales liczbe: 3.3
	3,2 - Podales liczbe: 3
	asf - Podales liczbe: -1.07374e+08
	a45b - Podales liczbe: -1.07374e+08
	123456789123456789123456789 - Podales liczbe: 1.23457e+26
	przy uøyciu %f - Podales liczbe: 123456790068172987402551296.000000
	*/
	float liczba_wym;
	printf("Zadanie 18.\n");
	printf("Program prosi o podanie liczby wymiernej i wypisuje ja na ekran.\nZapisz czesc ulamkowa w postaci rozwiniecia dziesietnego.");
	printf("\nRodziel czesc calkowita i ulamkowa kropka, np. 9.45778\n\n");
	printf("Podaj liczbe wymierna: ");
	(scanf_s("%g", &liczba_wym));
	printf("Podales liczbe: %g\nKoniec programu.\n\n", liczba_wym);

	//Zadanie 19. 
	/*
	Komentarz do dzia≥ania programu na testowanych wartoúciach:
	1) Podaj dwie liczby calkowite: asf, 5
	Podales liczby: -858993460, -858993460
	2) Podaj dwie liczby calkowite: 5, asf
	Podales liczby: 5, -858993460
	OgÛlnie: jeúli zamiast pierwszej liczby zostanπ podane b≥Ídne wartoúci, to program bÍdzie dzia≥ b≥Ídnie jak w zad 17.
	Jeúli zamiast drugiej, wypisze dobrze pierwszπ liczbÍ.
	*/
	int liczba1, liczba2;
	printf("Zadanie 19.\n");
	printf("Program prosi o podanie dwoch liczb calkowitych i wypisuje ja na ekran.\n");
	printf("Podawane liczby oddziel przecinkiem, a nastepnie spacja, np.: 4, 5.\n\n");
	printf("Podaj dwie liczby calkowite: ");
	(scanf_s("%d, %d", &liczba1, &liczba2));
	printf("Podales liczby: %d, %d\nKoniec programu.\n", liczba1, liczba2);

	//Zadanie 20.
	int liczba_a, liczba_b;
	printf("Zadanie 20.\n");
	printf("Program prosi o podanie dwoch liczb calkowitych, a nastepnie wypisuje je na ekran.\n");
	printf("Podaj dwie liczby calkowite. Po wpisaniu pierwszej, nacisnij enter. Po wpisaniu drugiej, nacisnij enter.\n\n");
	printf("Podaj liczby: ");
	if ((scanf_s("%d", &liczba_a) != 1) || (scanf_s("%d", &liczba_b) != 1)) {
			printf("Podano przynajmniej jedna bledna liczbe.\nKoniec programu.\n");
	}
	else
		printf("Podano liczby: %d, %d.\nKoniec programu.\n", liczba_a, liczba_b);

	//Zadanie 21.
	int liczba_h;
	printf("Zadanie 21.\n");
	printf("Program prosi o podanie liczby zapisanej w systemie szesnastkowym,\na nastepnie wypisuje ja w systemie dziesietnym.\n");
	printf("Liczba zapisana w systemie szesnastkowym sklada sie z ciagu znakow,\nskladajacych sie z cyfr 0-9 i liter A-F (malych lub wielkich).\n\n");
	printf("Podaj liczbe w systemie szesnastkowym: ");
	if (scanf_s("%X", &liczba_h) != 1) {
		printf("\nPodano bledne dane. Koniec programu.\n\n");
	} else
		printf("\nPodales liczbe: %d.\nKoniec programu.\n\n", liczba_h);

	//Zadanie 22.
	int liczba_c;
	printf("Zadanie 22.\n");
	printf("Program prosi o podanie liczby zapisanej w systemie dziesietnym,\na nastepnie wypisuje ja w systemie szesnastkowym.\n");
	printf("Liczba zapisana w systemie dziesietnym sklada sie z ciagu znakow,\nskladajacych sie z cyfr 0-9, poprzedzonych (lub nie) znakiem minus (-).\n\n");
	printf("Podaj liczbe w systemie dziesietnym: ");
	if (scanf_s("%d", &liczba_c) != 1) {
		printf("\nPodano bledne dane. Koniec programu.\n\n");
	}
	else
		printf("\nPodales liczbe: %X.\nKoniec programu.\n\n", liczba_c);

	//Zadanie 23.
	int liczba_c_plus;
	printf("Zadanie 23.\n");
	printf("Program prosi o podanie liczby NIEUJEMNEJ zapisanej w systemie dziesietnym,\na nastepnie wypisuje ja w systemie szesnastkowym.\n");
	printf("Liczba zapisana w systemie dziesietnym sklada sie z ciagu znakow, skladajacych sie z cyfr 0-9.\n\n");
	printf("Podaj liczbe w systemie dziesietnym: ");
	if ((scanf_s("%d", &liczba_c_plus) != 1) || liczba_c_plus < 0) {
		printf("\nPodano bledne dane. Koniec programu.\n\n");
	}
	else
		printf("\nPodales liczbe: %X.\nKoniec programu.\n\n", liczba_c_plus);

	//Zadanie 24.
	int liczba_dodatnia;
	printf("Zadanie 23.\n");
	printf("Program prosi o podanie liczby zapisanej w systemie dziesietnym,\na nastepnie wypisuje, czy liczba jest dodatnia, czy ujemna.\n");
	printf("Liczba zapisana w systemie dziesietnym sklada sie z ciagu znakow, skladajacych sie z cyfr 0-9,\ni jest poprzedzona (lub nie) znakiem minus (-).\n\n");
	printf("Podaj liczbe w systemie dziesietnym: ");
	if ((scanf_s("%d", &liczba_dodatnia) != 1) || liczba_dodatnia > 0) {
		printf("\nPodano liczbe dodatnia. Koniec programu.\n\n");
	}
	else
		printf("\nPodales liczbe niedodatnia.\nKoniec programu.\n\n");
	return 0;
}