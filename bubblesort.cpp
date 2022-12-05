//  Bubble sort
#include <bits/stdc++.h>
using namespace std;


//Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements
// if they are in the wrong order.

// A function to implement bubble sort
template <typename T>
void bubbleSort(T arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
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
    int N = sizeof(arr) / sizeof(arr[0]);//number of elements in the array
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}

