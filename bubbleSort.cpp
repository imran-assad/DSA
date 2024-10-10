#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for(int i=0; i<size-1;i++)
    {
        bool isSwap=false;
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            isSwap=true;
        }
        if (!isSwap)
        {
            return;
        }
        
    }
}

void printArray(int arr[],int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={1,4,5,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    printArray(arr,size);
}