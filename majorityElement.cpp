#include <iostream>
using namespace std;

int majorityElement(int arr[], int size)
{
    int n=size/2;
    int i;
    for( i=0; i<size;i++)
    {
        int frequency=1;
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]==arr[j])
            {
                frequency++;
            }
        }   
        if(frequency>n)
        {
             return arr[i];
        } 
    }
            return -1;
        
}
int main()
{
    int arr[]={1,1,3,3,3,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=majorityElement(arr,size);
    if(ans != -1)
    {
        cout<<"The number that most appeared is "<<ans<<endl;
    }
    else
    {
        cout<<"No majority element found";
    }
}