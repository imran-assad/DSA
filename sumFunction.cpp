#include <iostream>
using namespace std;

int sum(int n)
{
    
    int sum=0;
cout<<"the sum of the numbers: ";
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<"are ";
    return sum;

}

int main()
{
   cout<<sum(5);

}