#include <iostream>
using namespace std;

void pairSum(int arr[],int size,int target)
{
    int pair_sum=0,i=0,j=size-1;
    bool found=false;
    while (i<j)
    {
        pair_sum = arr[i]+arr[j];
        if(pair_sum>target)
        {
            j--;
        }
        else if(pair_sum<target)
        {
            i++;
        }
        else{
          cout<<"the required sum "<<pair_sum<<" and their indexes are at "<<i<<" and "<<j;
          found=true;
          i++;
          j--;
        }
    }
    if(!found)
    {
        cout<<"target is not found";
    }
    

}

int main()
{
    int arr[]={2,7,11,15};
    int target=30;
    int size=sizeof(arr)/sizeof(arr[0]);
    pairSum(arr, size, target);

}