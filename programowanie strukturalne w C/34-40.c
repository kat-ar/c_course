#include<stdio.h>
#include<math.h>
#include<cmath>


int main()
{
    //Zadanie 34.
    printf("Zadanie 34.\n");
    printf("Program liczy wartosc funkcji f(x) = sqrt(x^2 + 1) + [ln(x^2 + 1) / 5 + sin(x^2 + 1)] - e^(sin(x^2 + 1))\ndla podanej przez uzytkownika liczby.\n");
    printf("Autorka: Katarzyna Arent.\n");
    printf("Podaj liczbe: ");
    float liczba; // liczba podana przez uzytkownika
    float pom1, pom2;
    while (scanf_s("%f", &liczba) != 1 || getchar() != '\n') {
        printf("Bledne dane. Popraw: ");
        while (getchar() != '\n');
            ;
    }
    printf("\nPodales liczbe %g.\n", liczba);
    pom1 = liczba * liczba + 1;
    pom2 = sin(pom1);
    printf("Wartosc funkcji dla podanej liczby %g.\n", (sqrt(pom1) + (log(pom1)/(5 + pom2)) - exp(pom2)));
    printf("\nKoniec programu.\n");


    //Zadanie 35.
    printf("Zadanie 35.\n");
    printf("Pogram liczy wartosc funkcji f(x) = x^8 dla podanej przez uzytkownika liczby.\n");
    float x; // liczba podana przez uzytkownika
    printf("Podaj liczbe: ");
    while (scanf_s("%f", &x) != 1 || getchar() != '\n') {
            printf("Bledne dane. Popraw: ");
            while (getchar() != '\n')
                ;
    }
    printf("Podales liczbe x = %g. ", x);
    x *= x;
    x *= x;
    x *= x;
    printf("x^8 = %g.\n", x);
    printf("\nKoniec programu.\n");

    //Zadanie 36.
    printf("Program liczy wartosc funkcji f(x) = 13(x-2) + 17(x-2)^2 + 23(x-2)^3\ndla podanej przez uzytkownika liczby.\n");
    float licz; // liczba podana przez uzytkownika
    float pom1;
    printf("Podaj liczbe: ");
    while (scanf_s("%f", &licz) != 1 || getchar() != '\n') {
            printf("Bledne dane. Popraw: ");
            while (getchar() != '\n')
                ;
    }
    printf("Podales liczbe x = %g. ", licz);
    licz = licz - 2;
    pom1 = licz*licz;
    licz = pom1*(13/licz + 17 + 23 * licz);

    printf("Wartosc funkcji f(x) = %g.\n", licz);
    printf("Koniec programu.\n");

    //Zadanie 37.
    printf("Zadanie 37.\n");
    printf("Program liczy wartosc funkcji f(x,y) = y + sqrt(x^2 + y^2) + [(x^2 + y^2)/cos(x^2)]\ndla podanej przez uzytkownika liczby. ");
    printf("Liczby x, y musza spelniac nierownosc -1 < x,y < 1.\n");
    float x1, y1; // liczby podana przez uzytkownika
    float robx, roby, rob1;
    printf("Podaj liczbe x: ");
    while (scanf_s("%f", &x1) != 1 || fabs(x1) >= 1 || getchar() != '\n') {
        printf("Bledne dane. Popraw: ");
        while (getchar() != '\n')
            ;
    }
    printf("Podaj liczbe y: ");
    while (scanf_s("%f", &y1) != 1 || fabs(y1) >= 1 || getchar() != '\n') {
        printf("Bledne dane. Popraw: ");
        while (getchar() != '\n')
            ;
    }
    printf("Podales liczby x = %g, y = %g. ", x1, y1);
    robx = x1 * x1;
    roby = y1 * y1;
    rob1 = robx + roby;

    printf("Wartosc funkcji f(x, y) = %g.\n", (y1 + sqrt(rob1) +((rob1)/cos(robx))));
    printf("Koniec programu.\n");

    //Zadanie 38.
    printf("Zadanie 38.\n");
    printf("Program prosi o podanie dwoch liczb calkowitych, oraz wybranie dzialania,\njakie ma na nich wykonac. Nastepnie wypisuje wynik wybranego dzialania.\n");
    printf("Autorka: Katarzyna Arent.\n");
    printf("Prosze podac pierwsza liczbe calkowita: ");
    int liczba1, liczba2; // liczby podane przez uzytkownika do obliczenia na nich dzialania
    int dzialanie; // liczba podana przez uzytkownika - wybor dzialania do wykonania na podanych liczbach
    while (scanf_s("%d", &liczba1) != 1 || getchar() != '\n') {
        printf("Bledne dane. Popraw: ");
        while (getchar() != '\n')
            ;
    }
    printf("Prosze podac druga liczbe calkowita: ");
    while (scanf_s("%d", &liczba2) != 1 || getchar() != '\n') {
        printf("Bledne dane. Popraw: ");
        while (getchar() != '\n')
            ;
    }
    printf("\nPodano liczby: %d, %d.\n", liczba1, liczba2);
    printf("Jakie dzialanie chcesz wykonac?\n");
    printf("1) mnozenie\n2) dodawanie\n3) odejmowanie\n4) dzielenie.\nWybierz odpowiednia liczbe: ");
    while (scanf_s("%d", &dzialanie) != 1 || dzialanie > 4 || dzialanie < 1|| getchar() != '\n') {
        printf("Podano bledna liczbe. Wybierz ponownie (1, 2, 3 lub 4): ");
        while (getchar() != '\n')
            ;
    }
    //wersja if-else
    if (dzialanie == 1)
        printf("\nWybrano mnozenie. %d * %d = %d", liczba1, liczba2, liczba1 * liczba2);
    else if (dzialanie == 2)
        printf("\nWybrano dodawanie. %d + %d = %d", liczba1, liczba2, liczba1 + liczba2);
    else if (dzialanie == 3)
        printf("\nWybrano odejmowanie. %d - %d = %d", liczba1, liczba2, liczba1 - liczba2);
    else if (dzialanie == 4) {
        float c1, c2; // zmienne pomocnicze do wykonania dzielenia (bo nie zawsze wynik wychodzi calkowity)
        c1 = liczba1;
        c2 = liczba2;
        printf("\nWybrano dzielenie. %g / %g = %g", c1, c2, c1 / c2);
    }
    //wersja switch
    switch (dzialanie) {
    case 1:
        printf("\nWybrano mnozenie. %d * %d = %d", liczba1, liczba2, liczba1 * liczba2);
        break;
    case 2:
        printf("\nWybrano dodawanie. %d + %d = %d", liczba1, liczba2, liczba1 + liczba2);
        break;
    case 3:
        printf("\nWybrano odejmowanie. %d - %d = %d", liczba1, liczba2, liczba1 - liczba2);
        break;
    case 4:
        float c1, c2; // zmienne pomocnicze do wykonania dzielenia (bo nie zawsze wynik wychodzi calkowity)
        c1 = liczba1;
        c2 = liczba2;
        printf("\nWybrano dzielenie. %g / %g = %g", c1, c2, c1 / c2);
        break;
    }
    printf("\n\nKoniec programu.\n");

    //Zadanie 39.
    printf("Zadanie 39.\n");
    printf("Program prosi o podanie liczby zmiennopozycyjnej\n(rzeczywistej w rozwinieciu dziesietnym) i liczy\nwartosc funkcji\n");
    printf("\t\t\t2^x\tdla x > 0\n");
    printf("\t\t f(x) = \n");
    printf("\t\t\t-1\tw p. p.\n");

    printf("\nPodaj liczbe zmiennopozycyjna.\nCzesc calkowita i ulamkowa oddziel kropka, np. 5.473930: ");
    float zmienna;
    while (scanf_s("%f", &zmienna) != 1 || getchar() != '\n') {
        printf("Podano bledne dane. Popraw: ");
        while (getchar() != '\n')
            ;
    }
    printf("Podano liczbe x = %g. f(x) = %g.", zmienna, (zmienna > 0) ? pow(2, zmienna) : -1);
    printf("\n\nKoniec programu.\n\n");

    //Zadanie 40.

    /*
    Wyniki dzialania programu dla zadanych punktow:
    "OBA ALGORYTMY DAJA TEN SAM WYNIK.
    Odleglosc punktu (3,4) od (0,0) wynosi 5."
    "OBA ALGORYTMY DAJA TEN SAM WYNIK.
    Odleglosc punktu (2,20) od (0,0) wynosi 20.09975124224178."
    "ALGORYTMY DAJA ROZNE WYNIKI.
    Odleglosc punktu (34,987) od (0,0) wynosi:
     -wg "klasycznego" algorytmu 987.58543934183228
     -wg "specjalnego" algorytmu 987.5854393418324

    Wartosc bezwzgledna roznicy miedzy wynikami:
            1.1368683772161603e-13."
    "OBA ALGORYTMY DAJA TEN SAM WYNIK.
    Odleglosc punktu (0,1e-154) od (0,0) wynosi 9.9999999999999997e-155."
    "ALGORYTMY DAJA ROZNE WYNIKI.
    Odleglosc punktu (0,1e-155) od (0,0) wynosi:
     -wg "klasycznego" algorytmu 9.9999999999999857e-156
     -wg "specjalnego" algorytmu 1e-155

    Wartosc bezwzgledna roznicy miedzy wynikami:
            1.4490737809236667e-170."
    "ALGORYTMY DAJA ROZNE WYNIKI.
    Odleglosc punktu (0,1e-170) od (0,0) wynosi:
     -wg "klasycznego" algorytmu 0
     -wg "specjalnego" algorytmu 9.9999999999999998e-171

    Wartosc bezwzgledna roznicy miedzy wynikami:
            9.9999999999999998e-171."
    "Podaj wspolrzedna x punktu, ktory chcesz sprawdzic: 0
    Podaj wspolrzedna y punktu, ktory chcesz sprawdzic: 1e-400
    OBA ALGORYTMY DAJA TEN SAM WYNIK.
    Odleglosc punktu (0,0) od (0,0) wynosi 0."
    "OBA ALGORYTMY DAJA TEN SAM WYNIK.
    Odleglosc punktu (1e+154,0) od (0,0) wynosi 1e+154."
    "ALGORYTMY DAJA ROZNE WYNIKI.
    Odleglosc punktu (1e+155,0) od (0,0) wynosi:
     -wg "klasycznego" algorytmu inf
     -wg "specjalnego" algorytmu 1e+155

    Wartosc bezwzgledna roznicy miedzy wynikami:
            inf."
    */
    /*
    Różnica w działaniu algorytmów wynika prawdopodobnie z zaokrąglania obliczanych wartości.
    W ostatnim przypadku możliwe że kończy się pamięć obliczeniowa dla pierwszego algorytmu.
    */
    printf("Zadanie 40.\n");
    printf("Program prosi o podanie punktu w ukladzie wspolrzednych\ni oblicza odleglosc R od srodka do tego punktu.\n");
    printf("Aby wprowadzic liczby bardzo duze lub bardzo male, uzyj\nnotacji naukowej, np. 10^-155 zapisz jako 1e-155.\n\n");
    printf("\nPodaj wspolrzedna x punktu, ktory chcesz sprawdzic: ");
    double x2, y2; // odcieta i rzedna punktu, podaje je uzytkownik
    double klasyczna, specjalna; // odleglosci wedlug obu algorytmow
    while (scanf_s("%lf", &x2) != 1 || getchar() != '\n') {
        printf("Podano bledne dane. Popraw: ");
        while (getchar() != '\n')
            ;
    }
    printf("Podaj wspolrzedna y punktu, ktory chcesz sprawdzic: ");
    while (scanf_s("%lf", &y2) != 1 || getchar() != '\n') {
        printf("Podano bledne dane. Popraw: ");
        while (getchar() != '\n')
            ;
    }
    //Algorytm "klasyczny"
    klasyczna = sqrt(x2 * x2 + y2 * y2);

    //Algorytm "specjalny"
    if (x2 == 0)
        specjalna = fabs(y2);
    else {
        if (fabs(x2) >= fabs(y2))
            specjalna = (fabs(x2) * sqrt(1 + (y2 / x2)* (y2 / x2)));
        else
            specjalna = (fabs(y2) * sqrt(1 + (x2 / y2)* (x2 / y2)));
    }

    //Porownanie i wypisywanie wyniku
    if (klasyczna == specjalna)
        printf("OBA ALGORYTMY DAJA TEN SAM WYNIK.\nOdleglosc punktu (%g,%g) od (0,0) wynosi %.17g.", x2, y2, specjalna);
    else {
        printf("ALGORYTMY DAJA ROZNE WYNIKI.\n");
        printf("Odleglosc punktu (%g,%g) od (0,0) wynosi:\n", x2, y2);
        printf(" -wg \"klasycznego\" algorytmu %.17g\n", klasyczna);
        printf(" -wg \"specjalnego\" algorytmu %.17g\n", specjalna);
        printf("\nWartosc bezwzgledna roznicy miedzy wynikami:\n\t%.17g.", fabs(specjalna - klasyczna));
    }
    printf("\n\nKoniec programu.\n");
    return 0;
}

