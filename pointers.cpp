#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int* ptr=&a;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    int** ptrr=&ptr;
    cout<<&ptr<<endl;
    cout<<ptrr<<endl;
    cout<<**ptrr<<endl;
    cout<<*ptrr<<endl;
    int arr[]={1,3,4,5};
    cout<<"address of array "<<*arr<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    int b=10;
    ptr=&b;
    cout<<*ptr<<endl;
    cout<<&b;
    

}