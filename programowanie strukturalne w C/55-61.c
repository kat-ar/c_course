#include <stdio.h>
#include<limits.h>
#include<math.h>
#include<ctype.h>
#define M_PI 3.14159265358979323846

int main()
{
    ////Zadanie 55.
    //printf("Zadanie 55.\nProgram oblicza minimum z podanych liczb.\nAutorka:Katarzyna Arent.\n\n");
    //printf("Wprowadz ciag liczb calkowitych.\nJesli chcesz zakonczyc podawanie liczb, wprowadz 0.\n");
    //
    //int liczba = 1;
    //int minimum = INT_MAX; //wczytana liczba, aktualne minimum
    //while (liczba != 0) { // 
    //    //kontrola poprawności i wczytanie liczby
    //    printf("Podaj liczby: ");
    //    while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
    //        printf("Bledne dane. Podaj poprawne: ");
    //        while (getchar() != '\n')
    //            ;
    //    }
    //    //porownanie aktualnie czytanej liczby z minimum + ew. zapisanie jej w zmiennej minimum
    //    if (liczba != 0 && liczba < minimum)
    //        minimum = liczba; 
    ////    printf("Podana liczba to: %d, a minimum: %d\n", liczba, minimum);
    //}
    //printf("\nMinimum z podanych liczb to: %d", minimum);
    //printf("\n\nKoniec programu.\n\n");
    //return 0;

    ////Zadanie 56.
    //printf("Zadanie 56.\nProgram oblicza srednia arytmetyczna z podanych liczb.\nAutorka: Katarzyna Arent.\n\n");
    //static int ILE = 10; // tu można zmienić z ilu liczb chcemy liczyć średnią
    //int i = 0;
    //float liczba = 0;
    //float suma = liczba; //wczytana liczba, aktualne minimum
    //printf("Podaj %d liczb: ", ILE);
    //while (i < ILE) {
    //    //kontrola poprawności i wczytanie liczby
    //    printf("Liczba %d: ", i+1);
    //    while (scanf_s("%f", &liczba) != 1 || getchar() != '\n') {
    //        printf("Bledne dane. Podaj poprawne: ");
    //        while (getchar() != '\n')
    //            ;
    //    }
    //    //suma czesciowa
    //    suma += liczba;
    //    //printf("Podana liczba to: %g, a suma: %g\n", liczba, suma);
    //    i++;
    //}
    //printf("\nSrednia z podanych liczb to: %g", float(suma/ILE));
    //printf("\n\nKoniec programu.\n\n");
    //return 0;


    ////Zadanie 57.
    //printf("Zadanie 57.\nProgram oblicza srednia arytmetyczna i geometryczna z podanych liczb.\nAutorka: Katarzyna Arent.\n\n");
    //printf("Wprowadz ciag liczb calkowitych dodatnich.\nJesli chcesz zakonczyc podawanie liczb, wprowadz 0.\n");
    //int ile = 0;
    //float liczba = 1; //wczytana liczba
    //float suma = 0;
    //float iloczyn = 1;
    //while (liczba != 0) { // 
    //    //kontrola poprawności i wczytanie liczby
    //    printf("Podaj liczby: ");
    //    while (scanf_s("%f", &liczba) != 1 || liczba < 0 || getchar() != '\n') {
    //        printf("Bledne dane. Podaj poprawne: ");
    //        while (getchar() != '\n')
    //            ;
    //    }
    //    //
    //    if (liczba != 0) {
    //        //suma czesciowa
    //        suma += liczba;
    //        //iloczyn czesciowy
    //        iloczyn *= liczba;
    //        ile++;
    //    }
    //    //przypadek, kiedy od razu podajemy 0
    //    if (liczba == 0 && ile == 0) {
    //        printf("Nie podano zadnej liczby. Koniec programu.\n\n");
    //        return 0;
    //    }
    //    printf("Podano %d liczb\nSuma czesciowa %g, iloczyn czesciowy %g\n", ile, suma, iloczyn);
    //}
    //printf("\nSrednia arytmetyczna z podanych liczb to: %g", float(suma / ile));
    //printf("\nSrednia geometryczna z podanych liczb to: %g", pow(iloczyn, (1.0/ile)));
    //printf("\n\nKoniec programu.\n\n");
    //return 0;

    ////Zadanie 58.
    //printf("Zadanie 58.\n");
    //printf("Program wypisuje reprezentacje dziesietna liczby podanej w systemie dwojkowym.\n");
    //printf("Autorka: Katarzyna Arent.\n\n");
    //printf("Liczba w systemie dwojkowym to ciag zer i jedynek o maksymalnej dlugosci 32 znakow.\n");
    //printf("Podaj liczbe w systemie dwojkowym: ");
    //unsigned long int liczba = 0;
    //int pom, ile = 0;
    //char tekst;
    //tekst = getchar();
    //pom = tekst - '0';
    //while (tekst != '\n') {
    //    if (tekst != '1' && tekst != '0') {
    //        printf("\nPodano ciag, ktory nie sklada sie wylacznie z 0 i 1. \n\nKoniec programu.\n\n");
    //        return 0;
    //    }
    //    liczba = liczba * 2 + pom;
    //    tekst = getchar();
    //    pom = tekst - '0';
    //    ile++;
    //}
    //if (ile >= 32) {
    //    printf("Podany ciag jest za dlugi, program nie przeksztalci poprawnie podanej liczby.\n\nKoniec programu.\n\n");
    //    return 0;
    //}
    //printf("\nPodana liczba zapisana w systemie dziesietnym to: %d.", liczba);
    //printf("\nKoniec programu.\n");
    //return 0;

    ////Zadanie 59.
    //printf("Zadanie 59.\n");
    //printf("Program prosi o podanie dwoch liczb calkowitych, oraz wybranie dzialania,\njakie ma na nich wykonac. Nastepnie wypisuje wynik wybranego dzialania.\n");
    //printf("Autorka: Katarzyna Arent.\n");
    //int liczba1, liczba2; // liczby podane przez uzytkownika do obliczenia na nich dzialania
    //int dzialanie; // liczba podana przez uzytkownika - wybor dzialania do wykonania na podanych liczbach
    //int czy_podano_liczby = 0;
    //while (1) {
    //    printf("0. Zakoncz program\n1. Wczytaj liczby\n2. Dodaj\n3. Odejmij\n4. Pomnoz\n5. Podziel.\n");
    //    printf("Co chcesz zrobic??\n");
    //    while (scanf_s("%d", &dzialanie) != 1 || dzialanie > 5 || dzialanie < 0 || getchar() != '\n') {
    //        printf("Podano bledna liczbe. Wybierz ponownie z zakresu 0-5: ");
    //        while (getchar() != '\n')
    //            ;
    //    }
    //    switch (dzialanie) {
    //    case 0:
    //        printf("\nKoniec programu.\n\n");
    //        return 0;
    //        break;
    //    case 1:
    //        printf("Prosze podac pierwsza liczbe calkowita: ");

    //        while (scanf_s("%d", &liczba1) != 1 || getchar() != '\n') {
    //            printf("Bledne dane. Popraw: ");
    //            while (getchar() != '\n')
    //                ;
    //        }
    //        printf("Prosze podac druga liczbe calkowita: ");
    //        while (scanf_s("%d", &liczba2) != 1 || getchar() != '\n') {
    //            printf("Bledne dane. Popraw: ");
    //            while (getchar() != '\n')
    //                ;
    //        }
    //        printf("\nPodano liczby: %d, %d.\n", liczba1, liczba2);
    //        czy_podano_liczby = 1;
    //        break;
    //    case 2:
    //        switch (czy_podano_liczby) {
    //        case 0:
    //            printf("Nie podano zadnych liczb, wiec nie moge ich dodac.\n");
    //            break;
    //        case 1:
    //            printf("\nPodano liczby: %d, %d.\n", liczba1, liczba2);
    //            printf("\nWybrano dodawanie. %d + %d = %d.\n\n", liczba1, liczba2, liczba1 + liczba2);
    //            break;
    //        }
    //        break;
    //    case 3:
    //        switch (czy_podano_liczby) {
    //        case 0:
    //            printf("Nie podano zadnych liczb, wiec nie moge ich dodac.");
    //            break;
    //        case 1:
    //            printf("\nWybrano odejmowanie. %d - %d = %d\n\n", liczba1, liczba2, liczba1 - liczba2);
    //            break;
    //        }
    //        break;
    //    case 4:
    //        switch (czy_podano_liczby) {
    //        case 0:
    //            printf("Nie podano zadnych liczb, wiec nie moge ich dodac.");
    //            break;
    //        case 1:
    //            printf("\nWybrano mnozenie. %d * %d = %d\n\n", liczba1, liczba2, liczba1 * liczba2);
    //            break;
    //        }
    //        break;
    //    case 5:
    //        switch (czy_podano_liczby) {
    //        case 0:
    //            printf("Nie podano zadnych liczb, wiec nie moge ich dodac.");
    //            break;
    //        case 1:
    //            float c1, c2; // zmienne pomocnicze do wykonania dzielenia (bo nie zawsze wynik wychodzi calkowity)
    //            c1 = liczba1;
    //            c2 = liczba2;
    //            printf("\nWybrano dzielenie. %g / %g = %g\n\n", c1, c2, c1 / c2);
    //            break;
    //        }
    //        break;
    //    }
    //}
    //printf("\n\nKoniec programu.\n");
    //return 0;

    ////Zadanie 60.
    //printf("Zadanie 60.\n");
    //printf("Program oblicza pole trojkata.\nAutorka: Katarzyna Arent.\n\n");
    //while (1) {
    //    printf("Co chcesz podac?\n");
    //    printf("\t0) chce zakonczyc program\n\t1) podstawe i opuszczona na nia wysokosc\n\t2) dwa boki i kat pomiedzy nimi\n\t3) trzy boki.\n");
    //    printf("Wybierz odpowiednia liczbe: ");
    //    int wybor; //uzytkownik podaje, jak chce policzyc pole trojkata.
    //    while (scanf_s("%i", &wybor) != 1 || (wybor < 0 || wybor > 3) || getchar() != '\n') {
    //        printf("Nie wybrano zadnej z dostepnych opcji. Sprobuj ponownie: ");
    //        while (getchar() != '\n')
    //            ;
    //    }
    //    printf("Wybrano opcje %i) ", wybor);
    //    switch (wybor) {
    //    case 0:
    //        printf("\nKoniec programu.\n\n");
    //        return 0;
    //        break;
    //    case 1:
    //    {
    //        float podstawa, wysokosc;
    //        printf("podstawa i opuszczona na nia wysokosc.\n");
    //        printf("Podaj dlugosc boku trojkata: ");
    //        while (scanf_s("%f", &podstawa) != 1 || podstawa <= 0 || getchar() != '\n') {
    //            printf("Bledne dane. Sprobuj ponownie: ");
    //            while (getchar() != '\n')
    //                ;
    //        }
    //        printf("Podaj wysokosc trojkata: ");
    //        while (scanf_s("%f", &wysokosc) != 1 || wysokosc <= 0 || getchar() != '\n') {
    //            printf("Bledne dane. Sprobuj ponownie: ");
    //            while (getchar() != '\n')
    //                ;
    //        }
    //        printf("Pole trojkata wynosi %g.\n", 0.5 * podstawa * wysokosc);
    //        break;
    //    }
    //    case 2:
    //    {
    //        float bok1, bok2, kat;
    //        printf("dwa boki i kat pomiedzy nimi.\n");
    //        printf("Podaj dlugosc pierwszego boku trojkata: ");
    //        while (scanf_s("%f", &bok1) != 1 || bok1 <= 0 || getchar() != '\n') {
    //            printf("Bledne dane. Sprobuj ponownie: ");
    //            while (getchar() != '\n')
    //                ;
    //        }
    //        printf("Podaj dlugosc drugiego boku trojkata: ");
    //        while (scanf_s("%f", &bok2) != 1 || bok2 <= 0 || getchar() != '\n') {
    //            printf("Bledne dane. Sprobuj ponownie: ");
    //            while (getchar() != '\n')
    //                ;
    //        }
    //        printf("Chcesz podac kat w 1) stopniach\n\t\t   2) radianach?\n");
    //        printf("Wybierz liczbe: ");
    //        int wybor2; // wybor pomiedzy stopniami i radianami
    //        while (scanf_s("%i", &wybor2) != 1 || (wybor2 != 1 && wybor2 != 2) || getchar() != '\n') {
    //            printf("Nie wybrano zadnej z dostepnych opcji. Sprobuj ponownie: ");
    //            while (getchar() != '\n')
    //                ;
    //        }
    //        switch (wybor2) {
    //        case 1:
    //            printf("Podaj kat pomiedzy bokami trojkata (w stopniach, maksymalnie 180): ");
    //            while (scanf_s("%g", &kat) != 1 || kat >= 180 || getchar() != '\n') {
    //                printf("Bledne dane. Sprobuj ponownie: ");
    //                while (getchar() != '\n')
    //                    ;
    //            }
    //            printf("Podano kat %g stopni.\n", kat);
    //            kat *= (M_PI / 180);
    //            break;
    //        case 2:
    //            printf("Podaj kat pomiedzy bokami trojkata (w radianach, maksymalnie pi): ");
    //            while (scanf_s("%g", &kat) != 1 || kat >= M_PI || getchar() != '\n') {
    //                printf("Bledne dane. Sprobuj ponownie: ");
    //                while (getchar() != '\n')
    //                    ;
    //            }
    //            printf("Podano kat %g radianow.\n", kat);
    //            break;
    //        }
    //        printf("Pole trojkata wynosi %g.\n", 0.5 * bok1 * bok2 * sin(kat));
    //        break;
    //    }
    //    case 3:
    //    {
    //        float a, b, c;
    //        printf("trzy boki.\n");
    //        printf("Podaj dlugosc pierwszego boku trojkata: ");
    //        while (scanf_s("%f", &a) != 1 || a <= 0 || getchar() != '\n') {
    //            printf("Bledne dane. Sprobuj ponownie: ");
    //            while (getchar() != '\n')
    //                ;
    //        }
    //        printf("Podaj dlugosc drugiego boku trojkata: ");
    //        while (scanf_s("%f", &b) != 1 || b <= 0 || getchar() != '\n') {
    //            printf("Bledne dane. Sprobuj ponownie: ");
    //            while (getchar() != '\n')
    //                ;
    //        }
    //        printf("Podaj dlugosc drugiego boku trojkata: ");
    //        while (scanf_s("%f", &c) != 1 || c <= 0 || getchar() != '\n') {
    //            printf("Bledne dane. Sprobuj ponownie: ");
    //            while (getchar() != '\n')
    //                ;
    //        }
    //        if (a + b <= c || a + c <= b || b + c <= a) { //nierownosc trojkata
    //            printf("Z bokow tych dlugosci nie da sie zbudowac trojkata.\n");
    //        }
    //        else {
    //            float p;
    //            p = 0.5 * (a + b + c);
    //            printf("Pole trojkata wynosi %g.", sqrt(p * (p - a) * (p - b) * (p - c))); //wzor Herona
    //        }
    //        break;
    //    }
    //    }
    //}
    //
    //printf("\nKoniec programu.\n");
    //return 0;

    //Zadanie 61.
    printf("Zadanie 46.\n");
    printf("Program prosi uzytkownika o podanie godziny w formacie hh:mm\n");
    printf("a nastepnie wypisuje podana godzine.\n");
    printf("Autorka: Katarzyna Arent\n");
    printf("Zachowaj format hh:mm. Godziny moga byc podane w zakresie 0-23,\n");
    printf("minuty w zakresie 0-59. Podaj zawsze dwie cyfry godzin i minut,\n");
    printf("oddziel je dwukropkiem. Przykladowe poprawnie podane godziny:\n");
    printf("03:12, 15:03, 00:45. Niepoprawnie: 24:00, 3:12.\n\n");
    int godz = 0; // wczytana godzina, zakres 0-23
    int min = 0; // wczytane minuty, zakres 0-59
    char znak; // wczytany znak, kolejno znajda sie tu wszystkie znaki
    int czy_poprawna_godzina = 0;
    while (czy_poprawna_godzina != 1) {
        printf("Podaj godzine hh:mm\t");
        //poczatek wczytywania godziny
        //wczytanie 1 znaku
        znak = getchar();
        if (znak < '0' || znak > '2') {
            printf("Pierwszy znak godziny musi byc cyfra 0, 1 lub 2.\n");
            czy_poprawna_godzina = 0;
            while (getchar() != '\n')
                ;
            continue;
        }
        godz = znak - '0';
        //wczytanie 2 znaku
        znak = getchar();
        if (!isdigit(znak)) {
            printf("Drugi znak godziny musi byc cyfra (0-9).\n");
            czy_poprawna_godzina = 0;
            while (getchar() != '\n')
                ;
            continue;
        }
        godz = godz * 10;
        godz = godz + (znak - '0');
        if (godz > 23) {
            printf("Godzina musi byc z zakresu 0-23.\n");
            czy_poprawna_godzina = 0;
            while (getchar() != '\n')
                ;
            continue;
        }
        //wczytanie 3 znaku
        if (getchar() != ':') {
            printf("Trzeci znak musi byc dwukropkiem.\n");
            czy_poprawna_godzina = 0;
            while (getchar() != '\n')
                ;
            continue;
        }
        //wczytanie 4 znaku
        znak = getchar();
        if (znak < '0' || znak > '5') {
            printf("Pierwszy znak minut musi byc cyfra z zakresu 0-5.\n");
            czy_poprawna_godzina = 0;
            while (getchar() != '\n')
                ;
            continue;
        }
        min = znak - '0';
        //wczytanie 5 znaku
        znak = getchar();
        if (!isdigit(znak)) {
            printf("Drugi znak minut musi byc cyfra (0-9).\n");
            czy_poprawna_godzina = 0;
            while (getchar() != '\n')
                ;
            continue;
        }
        min = min * 10;
        min = min + (znak - '0');
        //wczytanie 6 znaku
        if (getchar() != '\n') {
            printf("Ostatni (szosty) znak musi byc enterem.\n");
            czy_poprawna_godzina = 0;
            while (getchar() != '\n')
                ;
            continue;
        }
        czy_poprawna_godzina = 1;
    }
    //poczatek wypisywania godziny
    printf("\nOto wczytana godzina:\n%i ", min);
    if (min == 1) {
        printf("minuta");
    }
    else if (min >= 10 && min <= 19) {
        printf("minut");
    }
    else if (znak >= '2' && znak <= '4') {
        printf("minuty");
    }
    else
        printf("minut");
    printf(" po %i.", godz);
    printf("\n\nKoniec programu.\n");
    return 0;
}