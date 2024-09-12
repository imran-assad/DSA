#include <iostream>
using namespace std;

int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        // for printing spaces formula n-i-1
        for(int j=0; j<n-i-1;j++)
        {
            cout<<"  ";
        }
        //for printing numbers on left side
        for (int j=0; j<i+1;j++)
        {
            cout<<j+1<<" ";
        }
        for(int j=i+0;j>0;j--)
    {
        cout<<j<<" ";
    }
        //for printing numbers on right side
        cout<<endl;
    }

    
    
}