#include <iostream>
using namespace std;
int main()
{
    // char ch;
    // cout<<"Enter any character";
    // cin>>ch;
    // if(ch>='a' && ch<='b')
    // {
    //     cout<<"Lower Case";
    // }
    // else{
    //     cout<<"upper case";

    // }
    int sum=0,n;
     cout<<"Enter any number: ";
     cin>>n;
     cout<<"The sum of the numbers are: ";
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        cout<<i<<" ";
    }
    cout<<":"<<sum;
}