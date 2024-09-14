#include <iostream>
using namespace std;

int factN(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int fact_n=factN(n);
    int fact_r=factN(r);
    int fact_nr=factN(n-r);
    int nCR=  fact_n/(fact_r*fact_nr);
    return nCR;
}

int main()
{
    int n=8, r=6;
    cout<<nCr(n,r);
}