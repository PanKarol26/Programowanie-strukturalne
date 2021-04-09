#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, c;
    float delta, x1, x2;
    const int b = -3;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj c: ";
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
        cout<<"x1 = "<<x1<<"  x2 = "<<x2;

        return 0;
}

