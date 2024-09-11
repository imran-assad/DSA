#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
  bool  isPrime=true;
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
        isPrime=false;
        break;
    }
  }
  if(isPrime==true)
  {
    cout<<"Prime";
  }
  else
  {
    cout<<"Not prime";
  }

}