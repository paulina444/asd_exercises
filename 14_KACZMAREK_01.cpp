//Paulina Kaczmarek zadanie 1
#include <iostream>

using namespace std;

bool czyPalindrom(int liczba)
{
    string napis = to_string(liczba);
    int dlugosc = napis.length();

    for (int i=0;i<dlugosc/2;i++)
    {
        if(napis[i]!=napis[dlugosc-1-i]) return false;
    }
    return true;
}

int main()
{
    cout<<"liczby ktore sa palindromami i pozostajace palindromami po podniesieniu ich do kwadratu";
    cout<<" w zakresie 0-1000 to:"<<endl;
    for(int i=0;i<=1000;i++)
    {
        if(czyPalindrom(i))
        {
            int j=i*i;
            if(czyPalindrom(j)) cout<<i<<endl;
        }

    }
    return 0;
}
