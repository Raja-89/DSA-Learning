#include <iostream>
using namespace std;

void merge(int arr[], int left[], int right[], int ls, int rs)
{
    int i=0,j=0,k=0; //i for left array, j for right array, k for merged array

    while(i<ls && j<rs){ //merge until one of the subarrays is exhausted
        if(left[i]<=right[j]){ //if current element of left subarray is smaller than or equal to right subarray
            arr[k]=left[i];
            i++;
        }
        else{ //if current element of right subarray is smaller than left subarray
            arr[k]=right[j];
            j++;
        }
        k++;
    }

    while(i<ls){ //copy remaining elements of left subarray, if any
        arr[k]=left[i];
        i++;
        k++;
    }

    while(j<rs){ //copy remaining elements of right subarray, if any
        arr[k]=right[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int size)
{
    if(size<2){ //base case: if the array has one or no element, it's already sorted
        return;
    }

    int ls = size/2; //left subarray size
    int rs = size - ls; //right subarray size
    int left[ls], right[rs]; //left and right subarrays

    for(int i=0;i<ls;i++){ //copying elements to left subarray
        left[i]=arr[i];
    }
    for(int i=0;i<rs;i++){ //copying elements to right subarray
        right[i]=arr[i+ls];
    }

    mergeSort(left, ls); //recursively sort left subarray
    mergeSort(right, rs); //recursively sort right subarray
    merge(arr, left, right, ls, rs); //merge left and right subarrays

}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, n);
    cout << "Sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    
    return 0;
}