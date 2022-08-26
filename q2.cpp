#include <iostream>
#include <algorithm>
using namespace std;

void findPair(int nums[], int n, int target)
{
   
    sort(nums, nums + n);
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
      
        if (nums[low] + nums[high] == target)
        {
            cout << "Pair found (" << nums[low] << ", " << nums[high] << ")\n";
            return;
        }
 
        (nums[low] + nums[high] < target)? low++: high--;
    }
 
   
    cout << "Pair not found";
}
 
int main()
{
    
    int n;
    cin>>n;

    int target;
    cin>>target;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    
    n = sizeof(nums)/sizeof(nums[0]);
    findPair(nums, n, target);
 
    return 0;
}