// Selection Sort

#include<bits/stdc++.h>
using namespace std;

//The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order)
// from the unsorted part and putting it at the beginning.

// In every iteration of the selection sort, the minimum element (considering ascending order) from the unsorted
// subarray is picked and moved to the sorted subarray.
template <typename T>
int minimum(T arr[],int n, int k, int loc)
{
    loc=k;
    int min=arr[k];
    for(int i=k;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i]; //subarray
            loc=i;
        }
    }
    return loc;
}
int selection(int arr[],int n)
{
    int loc=-1,k;
    for(k=0;k<n-1;k++)
    {
        int loc1=minimum(arr,n,k,loc);
        int temp=arr[k];
        arr[k]=arr[loc1];
        arr[loc1]=temp;
    }
    cout<<"The sorted list is:\n";
    for(k=0;k<n;k++)
        cout<<arr[k]<<" ";
}
int main() {
    int n;
    srand(time(NULL)); //take a random value at a specific time
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n], i;
    cout << "Enter the array values:\n";
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    for (i = 0; i < n; i++) {
        cout << arr[i] << " "<< endl;
    }
    //calling selection function
    selection(arr, n);
    return 0;
}