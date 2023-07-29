//Paulina Kaczmarek zadanie 4
#include <iostream>
#include <iomanip>
using namespace std;

double liczenieSilnia(int n)
{
    if(n==0) return 1;
    else return(n*liczenieSilnia(n-1));
}

double liczenie_e(double eps,int i=0)
{
    double res=1.0/liczenieSilnia(i);
    if(res<eps) return res;
    else return res+liczenie_e(eps, ++i);

}

int main()
{
    double eps;
    double przyblizenie;
    int il_cyfr_po_przecinku=0;

    cout<<"podaj jakie chcesz dostac przyblizenie: "<<endl;
    cin>>eps;

    przyblizenie=liczenie_e(eps);

    while(eps < 1)
    {
        eps=eps*10;
        il_cyfr_po_przecinku+=1;
    }

    cout << fixed;
    cout << setprecision(il_cyfr_po_przecinku);
    cout<<"e = "<<przyblizenie<<endl;

    return 0;
}
