#include<iostream>
#include <math.h>
using namespace std;

int trojkat(int, int, int);

int main()
{
    int a, b, c;

    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj c: ";
    cin>>c;

    if(trojkat(a, b, c))
        cout<<"Z tych odcinkow powstanie trojkot.";
    else
        cout<<"Z tych odcinkow nie powstanie trojkat.";
        return 0;
}

int trojkat(int a, int b, int c)
{
    if (a+b<c)
        return 0;
    if (b+c<a)
        return 0;
    if (c+a<b)
        return 0;

    return 1;
}
