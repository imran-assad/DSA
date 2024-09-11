#include <iostream>
using namespace std;
int main()
{
    // int num=1,n=5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<num<<" ";
    //         num++;     
    //     }
    //     cout<<endl;     
    // }    
    char ch='A',n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<ch<<" ";
            ch=ch+1;    
        }
        cout<<endl;     
    }  
}