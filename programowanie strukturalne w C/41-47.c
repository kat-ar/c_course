#include <stdio.h>
#include<math.h>
#include<ctype.h>
#define M_PI 3.14159265358979323846
int main()
{
    //Zadanie 41.
    printf("Zadanie 41.\n");
    printf("Program pobiera dwa wektory nalezace do plaszczyzny i sprawdza,\nczy sa prostopadle, albo rownolegle.\n");
    printf("Autorka: Katarzyna Arent.\n\n");
    float x1, y1; // wspolrzedne pierwszego wektora. podaje uzytkownik
    float x2, y2; // wspolrzedne drugiego wektora. podaje uzytkownik
    {
        printf("Jesli chcesz podac liczbe wymierna, zapisz ja w postaci dziesietnej,\na czesc calkowita oddziel od ulamkowej kropka, np. 5.43265.\n");
        printf("Liczby bardzo duze albo bardzo male zapisz przy uzyciu notacji naukowej,\nnp. 10^-154 zapisz jako 1e-154.\n");
        printf("Podaj wspolrzedne pierwszego wektora: \n");
        printf("x: ");
        while (scanf_s("%f", &x1) != 1 || getchar() != '\n') {
            printf("Bledne dane. Popraw: ");
            while (getchar() != '\n');
            ;
        }
        printf("y: ");
        while (scanf_s("%f", &y1) != 1 || getchar() != '\n') {
            printf("Bledne dane. Popraw: ");
            while (getchar() != '\n');
            ;
        }
        printf("Podaj wspolrzedne drugiego wektora: \n");
        printf("x: ");
        while (scanf_s("%f", &x2) != 1 || getchar() != '\n') {
            printf("Bledne dane. Popraw: ");
            while (getchar() != '\n');
            ;
        }
        printf("y: ");
        while (scanf_s("%f", &y2) != 1 || getchar() != '\n') {
            printf("Bledne dane. Popraw: ");
            while (getchar() != '\n');
            ;
        }
        printf("Podano wektory swobodne: (%g,%g) oraz (%g,%g).\n", x1, y1, x2, y2);
    }
    //wektor zerowy jest równoległy i prostopadły do dowolnego wektora swobodnego.
    if ((x1 == 0 && y1 == 0) || (x2 ==0 && y2 == 0)) {
        printf("Podano przynajmniej jeden wektor zerowy.\nWektory sa rownolegle i prostopadle.\n");
        printf("\nKoniec programu.\n");
        return 0;
    }
    else { //zaden wektor nie jest zerowy
        //dwa wektory są prostopadłe <=> ich iloczyn skalarny <w1, w2> = 0.
        if (x1 * x2 + y1 * y2 == 0) {
            printf("Wektory sa prostopadle.\n");
        }
        //dwa wektory są równoległe <=> jeden z nich można otrzymać mnożąc drugi przez skalar.
        else if (x1 / x2 == y1 / y2) {
            printf("Wektory sa rownolegle.\n");
        }
        else
            printf("Wektory nie sa ani prostopadle, ani rownolegle.\n");
    }
    printf("\nKoniec programu.\n");

    //Zadanie 42.
    printf("Zadanie 42.\n");
    printf("Program oblicza pole trojkata.\n");
    printf("Jakie masz dane o trojkacie?\n");
    printf("\t1) podstawa i opuszczona na nia wysokosc\n\t2) dwa boki i kat pomiedzy nimi\n\t3) trzy boki.\n");
    printf("Wybierz odpowiednia liczbe: ");
    int wybor; //uzytkownik podaje, jak chce policzyc pole trojkata.
    while (scanf_s("%i", &wybor) != 1 ||( wybor != 1 && wybor != 2 && wybor != 3 )|| getchar() != '\n') {
        printf("Nie wybrano zadnej z dostepnych opcji. Sprobuj ponownie: ");
        while (getchar() != '\n')
            ;
    }
    printf("Wybrano opcje %i) ", wybor);
    switch (wybor) {
    case 1:
    {
        float podstawa, wysokosc;
        printf("podstawa i opuszczona na nia wysokosc.\n");
        printf("Podaj dlugosc boku trojkata: ");
        while (scanf_s("%f", &podstawa) != 1 || podstawa <= 0 || getchar() != '\n') {
            printf("Bledne dane. Sprobuj ponownie: ");
            while (getchar() != '\n')
                ;
        }
        printf("Podaj wysokosc trojkata: ");
        while (scanf_s("%f", &wysokosc) != 1 || wysokosc <= 0 || getchar() != '\n') {
            printf("Bledne dane. Sprobuj ponownie: ");
            while (getchar() != '\n')
                ;
        }
        printf("Pole trojkata wynosi %g.\n", 0.5 * podstawa * wysokosc);
        break;
        }
    case 2:
    {
        float bok1, bok2, kat;
        printf("dwa boki i kat pomiedzy nimi.\n");
        printf("Podaj dlugosc pierwszego boku trojkata: ");
        while (scanf_s("%f", &bok1) != 1 || bok1 <= 0 || getchar() != '\n') {
            printf("Bledne dane. Sprobuj ponownie: ");
            while (getchar() != '\n')
                ;
        }
        printf("Podaj dlugosc drugiego boku trojkata: ");
        while (scanf_s("%f", &bok2) != 1 || bok2 <= 0 || getchar() != '\n') {
            printf("Bledne dane. Sprobuj ponownie: ");
            while (getchar() != '\n')
                ;
        }
        printf("Chcesz podac kat w 1) stopniach\n\t\t   2) radianach?\n");
        printf("Wybierz liczbe: ");
        int wybor2; // wybor pomiedzy stopniami i radianami
        while (scanf_s("%i", &wybor2) != 1 || (wybor2 != 1 && wybor2 != 2) || getchar() != '\n') {
            printf("Nie wybrano zadnej z dostepnych opcji. Sprobuj ponownie: ");
            while (getchar() != '\n')
                ;
        }
        switch (wybor2) {
        case 1:
            printf("Podaj kat pomiedzy bokami trojkata (w stopniach, maksymalnie 180): ");
            while (scanf_s("%g", &kat) != 1 || kat >=180 || getchar() != '\n') {
                printf("Bledne dane. Sprobuj ponownie: ");
                while (getchar() != '\n')
                    ;
            }
            printf("Podano kat %g stopni.\n", kat);
            kat *= (M_PI / 180);
            break;
        case 2:
            printf("Podaj kat pomiedzy bokami trojkata (w radianach, maksymalnie pi): ");
            while (scanf_s("%g", &kat) != 1 || kat >= M_PI || getchar() != '\n') {
                printf("Bledne dane. Sprobuj ponownie: ");
                while (getchar() != '\n')
                    ;
            }
            printf("Podano kat %g radianow.\n", kat);
            break;
        }
        printf("Pole trojkata wynosi %g.\n", 0.5 * bok1 * bok2 * sin(kat));
        break;
        }
    case 3:
    {
        float a, b, c;
        printf("trzy boki.\n");
        printf("Podaj dlugosc pierwszego boku trojkata: ");
        while (scanf_s("%f", &a) != 1 || a <= 0 || getchar() != '\n') {
            printf("Bledne dane. Sprobuj ponownie: ");
            while (getchar() != '\n')
                ;
        }
        printf("Podaj dlugosc drugiego boku trojkata: ");
        while (scanf_s("%f", &b) != 1 || b <= 0 || getchar() != '\n') {
            printf("Bledne dane. Sprobuj ponownie: ");
            while (getchar() != '\n')
                ;
        }
        printf("Podaj dlugosc drugiego boku trojkata: ");
        while (scanf_s("%f", &c) != 1 || c <= 0 || getchar() != '\n') {
            printf("Bledne dane. Sprobuj ponownie: ");
            while (getchar() != '\n')
                ;
        }
        if (a + b <= c || a + c <= b || b + c <= a) { //nierownosc trojkata
            printf("Z bokow tych dlugosci nie da sie zbudowac trojkata.\n");
        }
        else {
            float p;
            p = 0.5 * (a + b + c);
            printf("Pole trojkata wynosi %g.", sqrt(p * (p - a) * (p - b) * (p - c))); //wzor Herona
        }
        break;
        }
    }
    printf("\nKoniec programu.\n");
    //Zadanie 43.
    printf("Zadanie 43.\n");
    printf("Program zwraca minimalna z trzech podanych liczb.\n");
    float liczba1, liczba2, liczba3; // liczby podane przez uzytkownika
    printf("Podaj pierwsza liczbe: ");
    while (scanf_s("%f", &liczba1) != 1 || getchar() != '\n') {
        printf("Bledne dane. Sprobuj ponownie: ");
        while (getchar() != '\n')
            ;
    }
    printf("Podaj druga liczbe: ");
    while (scanf_s("%f", &liczba2) != 1 || getchar() != '\n') {
        printf("Bledne dane. Sprobuj ponownie: ");
        while (getchar() != '\n')
            ;
    }
    printf("Podaj trzecia liczbe: ");
    while (scanf_s("%f", &liczba3) != 1 || getchar() != '\n') {
        printf("Bledne dane. Sprobuj ponownie: ");
        while (getchar() != '\n')
            ;
    }
    float najmniejsza;
    najmniejsza = liczba1;
    if (liczba1 >= liczba2)
        najmniejsza = liczba2;
    else if (liczba2 >= liczba3)
        najmniejsza = liczba3;
    printf("\nMinimum wynosi %g.\n", najmniejsza);
    printf("\nKoniec programu.\n");

    //Zadanie 44.
    printf("Zadanie 44.\n");
    printf("Program pobiera od uzytkownika jeden znak i wypisuje jego kod ASCII.\n");
    char znak;
    printf("Podaj znak: ");
    znak = getchar();
    printf("Kod ASCII podanego znaku to: %d", znak);
    printf("\nKoniec programu.\n");

    //Zadanie 45.
    printf("Zadanie 45.\n");
    printf("Program pobiera kod znaku ASCII i wypisuje go (jesli to znak wypisywalny).\n");
    int podany_znak;
    printf("Podaj kod znaku, ktory chcesz sprawdzic: ");
    while (scanf_s("%d", &podany_znak) != 1 || podany_znak < 0 || getchar() != '\n') {
        printf("Nie podano poprawnego kodu ASCII. Sprobuj ponownie: ");
        while (getchar() != '\n')
            ;
    }
    if (podany_znak > 127) {
        printf("Nie podano poprawnego kodu ASCII.\n");
        printf("\nKoniec programu.\n");
        return 0;
    }
    else if (iscntrl(podany_znak) != 0) {
        printf("Podano kod znaku kontrolnego.\n");
    }
    else if (isprint(podany_znak) != 0) {
        printf("Podano kod znaku drukowalnego \'%c\'.\n", podany_znak);
    }
    printf("\nKoniec programu.\n");
    //Zadanie 46.
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
    printf("Podaj godzine hh:mm\t");
    //poczatek wczytywania godziny
    //wczytanie 1 znaku
    znak = getchar();
    if (znak < '0' || znak > '2') {
        printf("Pierwszy znak musi byc cyfra 0, 1 lub 2.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    godz = znak - '0';
    //wczytanie 2 znaku
    znak = getchar();
    if (!isdigit(znak)) {
        printf("Drugi znak musi byc cyfra (0-9).\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    godz = godz * 10;
    godz = godz + (znak - '0');
    if (godz > 23) {
        printf("Godzina musi byc z zakresu 0-23.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    //wczytanie 3 znaku
    if (getchar() != ':') {
        printf("Trzeci znak musi byc dwukropkiem.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    //wczytanie 4 znaku
    znak = getchar();
    if (znak < '0' || znak > '5') {
        printf("Pierwszy znak musi byc cyfra z zakresu 0-5.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    min = znak - '0';
    //wczytanie 5 znaku
    znak = getchar();
    if (!isdigit(znak)) {
        printf("Drugi znak musi byc cyfra (0-9).\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    min = min * 10;
    min = min + (znak - '0');
    if (min > 59) {
        printf("Minuty musza byc z zakresu 0-59.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    //wczytanie 6 znaku
    if (getchar() != '\n') {
        printf("Ostatni (szosty) znak musi byc enterem.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
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

    //Zadanie 47.
    printf("Zadanie 47.\n");
    printf("Program prosi uzytkownika o podanie daty w formacie dd.mm.rr\n");
    printf("a nastepnie wypisuje podana date.\n");
    printf("Autorka: Katarzyna Arent\n");
    printf("Zachowaj format dd.mm.rr. Program odczytuje daty z lat 2001-2050.\n");
    printf("Podaj zawsze dwie cyfry dnia, miesiaca i roku,\n");
    printf("oddziel je kropkami. Przykladowe poprawnie podane daty:\n");
    printf("03.12.10, 23.01.02. Niepoprawnie: 31.09.20, 1.01.51.\n\n");
    int dzien = 0; // wczytana godzina, zakres 1-31
    int miesiac = 0; // wczytane miesiace, zakres 1-12
    int rok = 0; // wczytane lata, zakres 1-50
    char znak; // wczytany znak, kolejno znajda sie tu wszystkie znaki
    printf("Podaj date dd.mm.rr\t");
    //poczatek wczytywania daty
    //wczytanie 1 znaku
    znak = getchar();
    if (znak < '1' || znak > '3') {
        printf("Pierwszy znak musi byc cyfra 1, 2 lub 3.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    dzien = znak - '0';
    //wczytanie 2 znaku
    znak = getchar();
    if (!isdigit(znak)) {
        printf("Drugi znak musi byc cyfra (0-9).\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    dzien = dzien * 10;
    dzien = dzien + (znak - '0');
    if (dzien > 31) {
        printf("Dzien musi byc z zakresu 1-31.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    //wczytanie 3 znaku
    if (getchar() != '.') {
        printf("Trzeci znak musi byc kropka.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    //wczytanie 4 znaku
    znak = getchar();
    if (znak < '0' || znak > '1') {
        printf("Pierwszy znak musi byc cyfra z zakresu 0 lub 1.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    miesiac = znak - '0';
    //wczytanie 5 znaku
    znak = getchar();
    if (!isdigit(znak)) {
        printf("Drugi znak musi byc cyfra (0-9).\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    miesiac = miesiac * 10;
    miesiac = miesiac + (znak - '0');
    if (miesiac > 12) {
        printf("Miesiace musza byc z zakresu 1-12.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    //wczytanie 6 znaku
    if (getchar() != '.') {
        printf("Szosty znak musi byc kropka.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    //wczytanie 7 znaku
    znak = getchar();
    if (znak < '0' || znak > '5') {
        printf("Pierwszy znak musi byc cyfra z zakresu 0-5.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    rok = znak - '0';
    //wczytanie 8 znaku
    znak = getchar();
    if (!isdigit(znak)) {
        printf("Drugi znak musi byc cyfra (0-9).\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    rok = rok * 10;
    rok = rok + (znak - '0');
    if (rok > 50) {
        printf("Wprowadzony rok przekracza obslugiwany zakres lat (2001-2050).\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    //wczytanie 9 znaku
    if (getchar() != '\n') {
        printf("Ostatni (dziewiaty) znak musi byc enterem");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    //sprawdzanie dlugosci miesiecy
    if (miesiac == 2 || miesiac == 4 || miesiac == 6 || miesiac == 9 || miesiac == 11) {
        if (dzien == 31) {
            printf("Wybrany miesiac ma mniej niz 31 dni.\n");
            printf("\n\nKoniec programu.\n");
            return 0;
        }
    }
    //sprawdzanie lat przestepnych
    if (rok%4 != 0 && miesiac == 2 && dzien == 29) {
        printf("Tylko w latach przestepnych luty ma 29 dni.\n");
        printf("\n\nKoniec programu.\n");
        return 0;
    }
    //poczatek wypisywania daty
    printf("\nOto wczytana data:\n%i ", dzien);
    if (miesiac == 1)
        printf("stycznia");
    else if (miesiac == 2)
        printf("lutego");
    else if (miesiac == 3)
        printf("marca");
    else if (miesiac == 4)
        printf("kwietnia");
    else if (miesiac == 5)
        printf("maja");
    else if (miesiac == 6)
        printf("czerwca");
    else if (miesiac == 7)
        printf("lipca");
    else if (miesiac == 8)
        printf("sierpnia");
    else if (miesiac == 9)
        printf("wrzesnia");
    else if (miesiac == 10)
        printf("pazdziernika");
    else if (miesiac == 11)
        printf("listopada");
    else
        printf("grudnia");
    if (rok < 10)
        printf(" 200%i.", rok);
    else
        printf(" 20%i.", rok);
    printf("\n\nKoniec programu.\n");
    return 0;
}