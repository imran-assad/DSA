#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for(int i=0;i<size;i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
        
    }
    return -1;
}

int main()
{
  int array[]={4,55,6,4,2};
  int size=5;
  int target=50;
  cout<<linearSearch(array, size, target);
}