#include <iostream>
using namespace std;

// void changeRef(int a)
// {
//     a=4;
//     cout<<"In function"<<endl;
//     cout<<a*4;
// }

// int main()
// {
//     int a=3;
//     changeRef(a);
//     cout<<endl;
//     cout<<"In main"<<endl;
//     cout<<a;
// }

void changeArray(int arr[],int size)
{
    cout<<"In function"<<endl;
    for(int i=0;i<size;i++)
    {
        arr[i]=arr[i]*2;
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3};
    changeArray(arr,3);
    cout<<endl;
    cout<<"In Main"<<endl;
    for(int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
}