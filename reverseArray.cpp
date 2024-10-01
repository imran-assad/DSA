#include <iostream>
using namespace std;

void reverseArray(int array[],int size)
{
    int start=0, end=size-1;
    while (start<end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
    
}
int main()
{
    int array[]={9,8,7,6,5,4,3,2,1};
    int size=9;
    reverseArray(array,size);
    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}