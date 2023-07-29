//Paulina Kaczmarek zadanie 3
#include <iostream>
#include <cmath>
using namespace std;

bool czyPierwsza(int n)
{
    if(n<2) return false;

    for (int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int liczba=0;
    cout<<"Liczby  pierwsze Mersenne'a nie wieksze niz 2^20:"<<endl;
    for (int p=1;p<21;p++)
    {
        if(czyPierwsza(p))
        {
            liczba=(1<<p)-1;
            if(czyPierwsza(liczba)) cout<<liczba<<endl;
        }
    }
    return 0;
}
