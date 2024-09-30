#include <iostream>
using namespace std;

int main()
{
    int nums[]={2,54,64,1,5,6};
    int size=6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_index = -1;
    int largest_index=-1;
    
        for (int i = 0; i < size; i++)
        {
            if (nums[i]<smallest)
            { 
                smallest=nums[i]; 
                smallest_index=i;
            }
           if(nums[i]>largest)
           {
            largest=nums[i];
            largest_index=i;
           }       
        }   
        cout << "Smallest number: " << smallest << " at index " << smallest_index << endl;
    cout << "Largest number: " << largest << " at index " << largest_index << endl; 
}