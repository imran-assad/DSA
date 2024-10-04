#include <iostream>
#include <vector>
using namespace std;


vector<int> pairSum(int arr[], int size, int target)
{
    vector<int> ans;
    int pair_sum=0, i=0,j=size-1;
    
   while (i<j)
   {
    pair_sum=arr[i]+arr[j];
     if(pair_sum>target)
    {
        j--;
    }
    else if(pair_sum<target)
    {
        i++;
    }
    else
    {
        ans.push_back(i);
        ans.push_back(j);
        return ans;   
    }
   }
   return ans;
   
}

int main()
{
    int arr[]={2,7,11,15};
    int target=26;
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans=pairSum(arr, size, target);
    if (!ans.empty()) // Check if the vector is not empty
    {
        cout << "The required indexes are at " << ans[0] << " and " << ans[1] << endl;
    }
    else
    {
        cout << "No two numbers sum up to the target value." << endl;
    }

    return 0;
}