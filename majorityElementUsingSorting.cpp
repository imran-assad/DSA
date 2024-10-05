#include <iostream>
#include <algorithm>
using namespace std;

int majorityElementUsingSorting(int arr[], int size)
{
    int frequency=1;
   int n=size/2;
   sort(arr,arr+size);
   for(int i=0; i<size;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
    int ans=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]==arr[i-1])
        {
            frequency++;
        }
        else
        {
            frequency=1;
           ans=arr[i];
        }
        if(frequency>n)
        {
        return ans;
        }
    }
    return -1;
    
}
int main()
{
    int arr[]={2,2,1,1,1,2,2,2,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array is "<<size<<endl;

    int requiredNumber= majorityElementUsingSorting(arr, size);
    if (requiredNumber != -1)
    {
        cout << "The majority element is: " << requiredNumber << endl;
    }
    else
    {
        cout << "No majority element found." << endl;
    }

}