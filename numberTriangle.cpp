#include <iostream>
using namespace std;

int main()
{
    // int n=5, num=1;
    // for (int i = 0; i < n; i++)
    // {
    //     for(int j=0;j<i+1;j++)
    //     {
    //         cout<<num; //cout<i+1
    //     }
    //     num++; //no need of these
    //     cout<<endl;
    // }
    int n=5; char ch='A';
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<ch<<" "; 
             
        }
        ch++;
        cout<<endl;
    }

}