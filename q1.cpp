#include <iostream>

using namespace std;
 

void swp(int arr[], int i, int j)
{
    int x = arr[i];
    arr[i] = arr[j];
    arr[j] = x;
}
 

void rearrangementofarray(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {

        if (arr[i - 1] > arr[i]) {
            swp(arr, i - 1, i);
        }
 
        
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swp(arr, i + 1, i);
        }
    }
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
 
    rearrangementofarray(arr, n);

    for (int i = 0; i < n; i++) {
        cout<< arr[i]<<" ";
    }
 
    return 0;
}