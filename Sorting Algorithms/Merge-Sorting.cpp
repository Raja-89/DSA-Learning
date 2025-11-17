#include <iostream>
using namespace std;

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

    cout << "Sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    
    return 0;
}