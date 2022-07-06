#include <stdio.h>
#include<math.h>

int main()
{
    //Zadanie 48.
    printf("Zadanie 48.\nProgram wypisuje 50 poczatkowych poteg liczby 2.\nAutorka: Katarzyna Arent.\n\n");
    static int liczba = 2; //tu mozna zmodyfikowac, dla jakiej liczby chce policzyc potegi
    int i = 1; 
    long long int potega = 1; //liczba przechowujaca kolejne potegi
    while (i <= 50) { //tu zmieniajac licznik petli mozna zmienic, ile poteg chcemy policzyc
        printf("2^%d = %lld\n", i, potega*= liczba);
        i++;
    }
    printf("/n/nKoniec programu./n");

    //Zadanie 49.
    printf("Zadanie 48.\nProgram wypisuje silnie liczb od 1 do 200.\nAutorka: Katarzyna Arent.\n\n");
    static int ile = 90; // tu zmieniajac wartosc stalej mozemy ustalic, ile silni chcemy policzyc
    int i = 1;
    long double liczba = 1; //liczba przechowujaca kolejne silnie
    while (i <= ile) {
        printf("%d! = %.0f\n", i, liczba *= i);
        i++;
    }
    printf("/n/nKoniec programu./n");

    //Zadanie 50.
    printf("Zadanie 50.\nProgram wypisuje wartosci funkcji f(n) = (3^n)/((n+1)!) dla liczb od 1 do 200.\nAutorka: Katarzyna Arent.\n\n");
    static int ile = 200; //dla ilu kolejnych liczb chcemy policzyc wartosc funkcji
    double n = 2;
    long double wartosc = 0; //tu bedzie przechowywana wartosc funkcji dla kolejnych n
    //f(1)
    wartosc = 1.5;
    printf("f(1) = %g\n", wartosc);
    //f(n+1), od n = 2
    while (n <= ile) {
        printf("f(%g) = %g\n", n, wartosc *= (3/(n+1)));
        n++;
    }
    printf("/n/nKoniec programu./n");

    //Zadanie 51.
    printf("Zadanie 51.\nProgram oblicza wartosci funkcji f(n) = (90^n)/((n+1)!) i zwraca najmniejsza liczbe naturalna,\ndla ktorej wartosc funkcji jest <1.\nAutorka: Katarzyna Arent.\n\n");
    static int ile = 400; //dla ilu kolejnych liczb chcemy policzyc wartosc funkcji
    double n = 2;
    long double wartosc = 0; //tu bedzie przechowywana wartosc funkcji dla kolejnych n
    //f(1)
    wartosc = 45;
    //printf("f(1) = %g\n", wartosc);
    //f(n+1), od n+1 = 2
    //f(236) = 0.533396, pierwsze mniejsze od 1
    while (n <= ile) {
        //printf("f(%g) = %g\n", n, wartosc *= (90 / (n + 1)));
        wartosc *= (90 / (n + 1));
        if (wartosc < 1) {
            printf("Najmniejsza liczba naturalna, dla ktorej wartosc funkcji jest mniejsza od 1 to n = %g.\nWartosc funkcji dla tej liczby to %g.\n\n", n,wartosc);
            printf("Koniec programu.\n");
            return 0;
        }
        n++;
    }

    //Zadanie 52.
    printf("Zadanie 52.\nProgram prosi o podanie linijki tekstu, a nastepnie wypisuje ja ponizej, usuwajac nadmiarowe spacje.\n");
    printf("\nAutorka: Katarzyna Arent\n\n");
    char tekst, czy_spacja; //zmienna przechowująca aktualnie czytany znak, zmienna oznaczająca nadmiarowe spacje (czy poprzedni znak był spacją)
    printf("Podaj tekst: ");
    tekst = getchar();
    czy_spacja = tekst;
    while (tekst != '\n') {
        if (tekst == ' ' && czy_spacja != ' ') {
            putchar(tekst);
            czy_spacja = ' ';
        }
        else if (tekst == ' ' && czy_spacja == ' ') {
            czy_spacja = ' ';
        }
        else if (tekst != ' ' && czy_spacja == ' ') {
            putchar(tekst);
            czy_spacja = tekst;
        }
        else
            putchar(tekst);
        tekst = getchar();
    }
    printf("/n/nKoniec programu./n");
    
    //Zadanie 53.
    printf("Zadanie 53.\n");
    printf("Program prosi o podanie liczby calkowitej i wypisuje ja na ekran.\n\n");
    printf("\nAutorka: Katarzyna Arent\n\n");
    int liczba;
    printf("Podaj liczbe calkowita: ");
    while (scanf_s("%d", &liczba) != 1 || liczba <= 0 || getchar() != '\n' ) {
        printf("Sprobuj ponownie: ");
        while (getchar() != '\n')
            ;
    }
    printf("Podales liczbe: %d.\nKoniec programu.\n\n", liczba);

    //Zadanie 54.
    printf("Zadanie 54.\n");
    printf("Program prosi o nacisniecie klawisza \'t\' klawiatury.\n");
    printf("\nProsze nacisnac klawisz \'t\' na klawiaturze: ");
    
    while ( getchar() != 't' || getchar() != '\n') {
        printf("Nacisnieto bledny klawisz. Popraw: ");
        while (getchar() != '\n')
            ;
    }
    printf("Podano znak \'t\'.\n\nKoniec programu.\n");
    
    return 0;
}
