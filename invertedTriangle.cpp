#include <iostream>
using namespace std;
int main()
{
    int num=1, n=5;
    // for(int i=0; i<n;i++)
    // {
    //     for(int j=4;j>i;j--)
    //     {
    //         cout<<num<<" ";
    //      }
    //      num++;
    //      cout<<endl;
    //  }
     for(int i=0; i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<i+1;
         }
         cout<<endl;
     }
   char  ch='A';
      for(int i=0; i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<ch;
         }
         ch++;
         cout<<endl;

     }

      for(int i=0; i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<ch<<" ";
         }
         ch++;
         cout<<endl;

     }
     
}
    // char ch='A';
    // int n=5;
    // for(int i=0; i<n;i++)
    // {
    //     for(int j=i+1;j>0;j--)
    //     {
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

