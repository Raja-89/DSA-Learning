#include<iostream>
using namespace std;
int n;
void Search(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if (arr[i]==element){
            cout<<"Element found at index: "<<i<<"\n";
            continue;
        } 
    }
    cout<<"Element not found\n";
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    int element; 
    cout<<"Enter the element to be searched: ";
    cin>>element;
    Search(arr,n,element);
    return 0;    


}