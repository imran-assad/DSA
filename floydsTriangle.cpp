#include <iostream>
using namespace std;
int main()
{
    // int num=1, n=5;
    // for(int i=0; i<n;i++)
    // {
    //     for(int j=0;j<(i+1);j++)
    //     {
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    char ch='A';
    int n=5;
    for(int i=0; i<n;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }


}