/*Napisz program, który wczytuje ze standardowego wejœcia trzy liczby
ca³kowite i wypisuje na standardowym wyjœciu najwiêksz¹ z ich wartoœci
(pamiêtaj o przypadku gdy wszystkie podane liczby lub dwie
z nich s¹ równe).*/

#include<iostream>
using namespace std;

int main()
{
    int liczba1, liczba2, liczba3, pomocnicza;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>liczba1;
    cout<<"Podaj druga liczbe: ";
    cin>>liczba2;
    cout<<"Podaj trzecia liczbe: ";
    cin>>liczba3;

    if(liczba1>=liczba2)
        pomocnicza=liczba1;
    else
        pomocnicza=liczba2;

    if(pomocnicza>=liczba3)
        cout<<"Najwieksza wartosc to: "<<pomocnicza;
    else
        cout<<"Najwieksza wartosc to: "<<liczba3;


    return 0;
}

