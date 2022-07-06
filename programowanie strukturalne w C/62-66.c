#include <stdio.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#define POCZ 0.0 //poczatek przedzialu
#define KON 0.125 //koniec przedzialu
#define ILE 33 //liczba punktow
enum { false, true };
int main() {

    //Zadanie 62
    printf("Zadanie 62.\n");
    printf("Program pobiera od uzytkownika imie i je wypisuje.\nAutorka: Katarzyna Arent\n\n");
    _Bool poprawne_imie = false; //czy podano poprawne imie?
    while (!poprawne_imie) { // jeden obrot - jedna proba wpisania imienia
        poprawne_imie = true;
        char znak; //kolejne znaki imienia
        printf("\nJak masz na imie?: "); //zacheta
        //pierwszy znak
        znak = getchar();
        if (!isupper(znak)) {
            if (!isalpha(znak)) {
                printf("Imie sklada sie tylko z liter.\n");
            }
            else {
                printf("Imie nalezy pisac wielka litera.\n");
            }
            poprawne_imie = false;
            while (znak != '\n') {
                znak = getchar();
            }
            continue;
        }
        printf("Masz na imie %c", znak);
        //pozostale znaki
        
        while ((znak = getchar()) != '\n') { // jeden obrot to jeden znak            
            poprawne_imie = true;
            if (!islower(znak)) {
                if(!isalpha(znak)) {
                    printf("...?\n");
                    printf("Imie sklada sie tylko z liter.\n");
                }
                else {
                    printf("...?\n");
                    printf("Tylko pierwsza litera imienia jest wielka.\n");
                }
                poprawne_imie = false;
                while (znak != '\n') {
                    znak = getchar();
                }
                continue;
            }
            printf("%c", znak);   
        }
    }
    printf(".\n");
    printf("Koniec programu.\n\n");
    return 0;

    //Zadanie 63.
    printf("Zadanie 63.\n");
    double krok = (KON - POCZ) / (ILE - 1);//odl. miedzy pkt.
    int i = 0;
    printf("Program oblicza bledy przyblizenia");
    printf(" funkcji sin(x) przez x\ndla %d", ILE);
    printf(" rownoodleglych punktow z przedzial");
    printf("u [%.g,%g].\n\n%-14s", POCZ, KON, "x");
    printf("%-13s%-12s", "sin(x)", "x-sin(x)");
    printf("%-12s\n", "|(x-sin(x))/x|");
    while (i <= ILE) {
        double x = POCZ + i * krok;
        double sin_x = sin(x);
        double bl_b = x - sin_x;
        double bl_w = x != 0.0 ? fabs(bl_b / x) : -1.0;
        printf("\n%11.9f%14.9f%12.3e", x, sin_x, bl_b);
        if (bl_w != -1.0)
            printf("%12.3e", bl_w);
        i++;
    }
    printf("\n\n");
    for (i = 0; i <= ILE ; ++i) {
        double x = POCZ + i * krok;
        double sin_x = sin(x);
        double bl_b = x - sin_x;
        double bl_w = x != 0.0 ? fabs(bl_b / x) : -1.0;
        printf("\n%11.9f%14.9f%12.3e", x, sin_x, bl_b);
        if (bl_w != -1.0)
            printf("%12.3e", bl_w);
    }
    printf("\n\nKoniec programu.\n");
    return 0;

    //Zadanie 64.
    printf("Zadanie 64.\n");
    int k = INT_MAX, i = -5;
    for (k + i ; i < 5 ; ++i) {
        printf("%d ", k + i);
    }
    //Wypisuj¹ siê b³êdne wyniki, bo wychodzimy poza zakres int
    printf("\nKoniec programu.\n");
    return 0;

    //Zadanie 65.
    static int liczba = 2; //tu mozna zmodyfikowac, dla jakiej liczby chce policzyc potegi
    int ile_poteg; // podaje uzytkownik
    int i = 1;
    long long int potega = 1; //liczba przechowujaca kolejne potegi
    printf("Zadanie 65.\nProgram wypisuje potegi liczby %d.\nAutorka: Katarzyna Arent.\n\n",liczba);
    printf("Ile poteg liczby %d chcesz policzyc?: ", liczba);
    while (scanf_s("%d", &ile_poteg) != 1 || getchar() != '\n') {
        printf("Sprobuj jeszcze raz. Ile poteg chcesz policzyc?: ");
        while (getchar() != '\n')
            ;
    }
    printf("Program wypisze teraz kolejne %d poteg liczby %d:\n", ile_poteg, liczba);
    for (i = 1 ; i <= ile_poteg ; i++) {
        printf("2^%d = %lld\n", i, potega *= liczba);
    }
    printf("\n\nKoniec programu.\n");
    return 0;

    //Zadanie 66.
    printf("Zadanie 56.\nProgram oblicza srednia arytmetyczna z podanych liczb.\nAutorka: Katarzyna Arent.\n\n");
    static int ile = 10; // tu mo¿na zmieniæ z ilu liczb chcemy liczyæ œredni¹
    int i = 0;
    float liczba = 0;
    float suma = liczba; //wczytana liczba, aktualne minimum
    printf("Podaj %d liczb: \n", ile);
    for (i; i < ile; i++) {
        //kontrola poprawnoœci i wczytanie liczby
        printf("Liczba %d: ", i + 1);
        while (scanf_s("%f", &liczba) != 1 || getchar() != '\n') {
            printf("Bledne dane. Podaj poprawne: ");
            while (getchar() != '\n')
                ;
        }
        //suma czesciowa
        suma += liczba;
        //printf("Podana liczba to: %g, a suma: %g\n", liczba, suma);
    }
    float srednia = suma / ile;
    printf("\nSrednia z podanych liczb to: %g", srednia);
    printf("\n\nKoniec programu.\n\n");
    return 0;
}