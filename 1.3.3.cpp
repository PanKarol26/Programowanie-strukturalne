/*Napisz program, kt�ry wczytuje ze standardowego wej�cia trzy liczby
ca�kowite i wypisuje na standardowym wyj�ciu najwi�ksz� z ich warto�ci
(pami�taj o przypadku gdy wszystkie podane liczby lub dwie
z nich s� r�wne).*/

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

