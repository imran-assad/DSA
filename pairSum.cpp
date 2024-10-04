#include <iostream>
using namespace std;

void pairSum(int arr[], int size, int target)
{
    bool found = false;
    for(int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int sum = arr[i] + arr[j];
            if(sum == target)
            {
                cout << "The required indexes are at " << i << " and " << j << endl;
                found = true; 
            }
        }
    }
    
    if (!found)
    {
        cout << "No two numbers sum up to the target value" << endl;
    }
}

int main()
{
    int arr[] = {2, 8,6,4}, target;
    
    cout << "Please enter the required target: " << endl;
    cin >> target;
    
    int size = sizeof(arr) / sizeof(arr[0]); 
    pairSum(arr, size, target); 
    
    return 0;
}
