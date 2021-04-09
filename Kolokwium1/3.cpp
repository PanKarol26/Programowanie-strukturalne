#include<iostream>
#include <math.h>
using namespace std;

void podziel(int[], int[]);

int main()
{
    int A[5], B[5], i;
    cout<<"Podaj 5 elementow do 1 tablicy:"<<endl;
        for (i=0; i<5; i++)
        cin>>A[i];

    cout<<"Podaj 5 elementow do 2 tablicy:"<<endl;
        for (i=0; i<5; i++)
        {cin>>B[i];
            if (B[i]==0) {i--; cout<<"Podaj liczbe rozna od zera!"<<endl;}
        }
    cout<<"-----------------------------------------------"<<endl;

    cout<<"Tablica A:"<<endl;
    for (i=0; i<5; i++)
        cout<<A[i]<<"  ";
        cout<<"\n"<<endl;

    cout<<"Tablica B:"<<endl;
    for (i=0; i<5; i++)
        cout<<B[i]<<"  ";
        cout<<"\n"<<endl;

    podziel(A, B);

        return 0;
}

void podziel(int A[], int B[])
{   int C[5], i, p;

    for (i=0; i<5; i++)
        A[i] / B[i] == C[i];

    cout<<"Tablica C:"<<endl;
    for (i=0; i<5; i++)
        cout<<C[i]<<" ";


}


