/*Napisz program, kt�ry wczytuje ze standardowego wej�cia nieujemn�
liczb� ca�kowit� n i wypisuje na standardowym wyj�ciu sum� kwadrat�w
liczb od 0 do n, czyli warto�� 02 + 12 + 32 + ... + n2.*/

#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    int liczba, n, m, suma=0;
    cout<<"Podaj calkowita liczbe nieujemna: ";
    cin>>liczba;
    if(liczba<=0)
    {
        return 0;
    }
    for (n=0; n<liczba; n++)
    {
        m=pow(n,2);
        cout<<n<<"^2 + ";
        suma=suma+m;
    }
        m=pow(liczba,2);
        cout<<liczba<<"^2";
        suma=suma+m;
        cout<<" = "<<suma;

    return 0;
}

