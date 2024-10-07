#include <iostream>
using namespace std;

int majorityElementUsingMooreAlgorithm(int arr[], int size)
{
    int frequency=0, ans=0;

    for(int i=0;i<size;i++)
    {
        if(frequency==0)
        {
            ans=arr[i];
        }
        if(ans==arr[i])
        {
            frequency++;
        }
        else
        {
            frequency--;
        }
    }
    return ans;
}

int main()
{
  int arr[]={2,2,1,1,1,2,2,2,1,1,1,1,6,6,6,6,6,6,6,6,6,6,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array is "<<size<<endl;

    int requiredNumber= majorityElementUsingMooreAlgorithm(arr, size);
    cout << "The majority element is: " << requiredNumber << endl;
    
}