#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high)
{
    if(low<high){ //this condition is to check if the array has more than one element
        int pivot=arr[high]; //choosing the last element as pivot but why? because it's easy to implement
        int i=low-1; // index of smaller element why low-1? because we will increment it before swapping
        for(int j=low;j<high;j++){ // j is the current element being compared with pivot
            if(arr[j]<pivot){  //if current element is smaller than pivot
                i++;
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        int temp=arr[i+1];
        arr[i+1]=arr[high];
        arr[high]=temp;
        int pi=i+1;

        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    quickSort(arr, 0, n-1);

    cout << "Sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    
    return 0;
}