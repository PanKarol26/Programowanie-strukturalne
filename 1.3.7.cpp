/*Napisz program, kt�ry wczytuje ze standardowego wej�cia wsp�czynniki
r�wnania kwadratowego z jedn� niewiadom� i wypisuje na standardowym
wyj�ciu wszystkie rozwi�zania rzeczywiste tego r�wnania
lub odpowiedni� informacj� w przypadku braku rozwi�za�.*/

#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c, delta, x1, x2;
    cout<<"Podaj wspolczynniki rownaia kwadratowego a, b, c :\n";
    cin>>a;
    cin>>b;
    cin>>c;
    delta=pow(b,2)-(4*a*c);
    if (delta==0)
    {
        cout<<"Rozwiazanie: x = "<<-b/(2*a);
        return 0;
    }
    if(delta<0)
    {
        cout<<"Brak rozwiazan";
        return 0;
    }
        delta=sqrt(delta);
        x1=(-b-delta)/(2*a);
        x2=(-b+delta)/(2*a);
        cout<<"Rozwiazanie: x1 = "<<x1<<" oraz x2 = "<<x2;
        return 0;
}

