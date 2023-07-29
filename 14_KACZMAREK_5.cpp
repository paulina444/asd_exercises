//Paulina Kaczmarek zadanie 5
#include <iostream>
#include <math.h>

using namespace std;

int liczenieSumy(int liczba1, int k)
{
    int suma = 0;
    int reszta = 0;

    while (liczba1 > 0)
    {
        reszta = liczba1 % 10;
        suma = suma + pow(reszta,k);
        liczba1 = liczba1 / 10;
    }
    return suma;
}

bool armstrong(int liczba1)
{
    string liczba1_str = to_string(liczba1);
    int k = liczba1_str.length();

    int liczba2 = liczba1 / 10;
    int suma = liczenieSumy(liczba2,k);

    for(int i=0;i<10;i++)
    {
        if(suma%2!=0)
        {
            continue;
        }
        int liczba3=liczba2*10+i;

        if (liczba3==suma+pow(i,k)) cout<<liczba3<<endl;
    }
    return liczba1==suma;

}

int main()
{
     cout<<"k-cyfrowe  liczby Armstronga dla k=3,4,...,9:"<<endl;

     for(int i=100;i<999999999;i+=10)
    {
        if(armstrong(i)) printf("%d\n", i);
    }

    return 0;
}
