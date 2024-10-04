#include <iostream>
using namespace std;

int kadaneAlgorithm(int arr[], int size)
{
    int maxSum=INT_MIN;
    int currentSum=0;
    for (int i = 0; i < size; i++)
    {
        currentSum+=arr[i];
        maxSum=max(currentSum,maxSum);
        if(currentSum<0)
        {
            currentSum=0;
        }     
    }
    return maxSum;
}

int main()
{
    int arr[]={3,-4,5,4,-1,7,-8};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum sum of kadane algorithm is "<<kadaneAlgorithm(arr,size);
    return 0;
}