#include <iostream>
using namespace std;

int decimelToBinary(int deciNum)
{
    int ans=0;
    int pow=1;
    while (deciNum>0)
    {
        int rem=deciNum%2;
        deciNum=deciNum/2;
        ans+=(rem*pow);
        pow=pow*10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<decimelToBinary(n);
}