//Paulina Kaczmarek zadanie 2
#include <iostream>
#include<cmath>

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

int main() {
    int n = pow(10,9);
    int i=1;

    cout<<"Parzyste liczby doskonale nie wieksze niz 10^9:"<<endl;
    while((pow(2,i)-1)*pow(2,i-1)<=n)
    {
        if (czyPierwsza(pow(2,i)-1)) cout<<(pow(2,i)-1)*pow(2,i-1)<<endl;
        i++;
    }
    return 0;
}
