#include <iostream> 
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<< "Enter the Elements: ";
    for(int i = 0;i<n;i++){
        cin>> arr[i];
    }

    for(int i =0;i<n;i++){
        int min=arr[i];
        int index= i;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                index=j;
            }
            if(arr[index]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[index];
                arr[index]=temp;

            }
        }
    }

    cout<<"Sorted Array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}