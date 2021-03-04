/*Napisz program kalkulator, kt�ry wykonuje wybran� przez u�ytkownika
operacj� arytmetyczn� na dw�ch wczytanych liczbach. Program
powinien wczytywa� dane ze standardowego wej�cia i wypisywa� wynik
na standardowym wyj�ciu.*/

#include <stdio.h>
int main()
{
    int liczba1,liczba2;
    char znak;

    printf("Podaj pierwsza liczbe: ");
    scanf("%i",&liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%i",&liczba2);
    printf("Wybierz dzialanie: + lub - lub * lub / lub %% ");
    fflush(stdin);
    scanf("%c",&znak);

    switch (znak)
    {
    case '+':
        printf("%i + %i = %i",liczba1,liczba2,liczba1+liczba2);
        break;

    case '-':
        printf("%i - %i = %i",liczba1,liczba2,liczba1-liczba2);
        break;

    case '/':
        if (liczba2==0)
            printf("Nie mozna dzielic przez 0");
        else
            printf("%i / %i = %i",liczba1,liczba2,liczba1/liczba2);
        break;

    case '%':
        printf("%i %% %i = %i",liczba1,liczba2,liczba1%liczba2);
        break;

    case '*':
        printf("%i * %i = %i",liczba1,liczba2,liczba1*liczba2);
        break;

    default:
        printf("Bledny operator");
        break;
    }
    return 0;
}
