#include <iostream>
using namespace std;

int binaryToDecimel(int binaryNum)
{
    int ans=0;
    int pow=1;
    while (binaryNum>0)
    {
        int rem=binaryNum%10;
        binaryNum=binaryNum/10;
        ans+=(rem*pow);
        pow=pow*2;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<binaryToDecimel(n);
}