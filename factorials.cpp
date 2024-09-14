#include <iostream>
using namespace std;

int factorial(int n, int fact)
{
    for(int i=0;i<=n;i++)
    {
        int fact=1;
        fact = fact*i;
    }
}

int main()
{
  cout<<factorial(5,6);
}