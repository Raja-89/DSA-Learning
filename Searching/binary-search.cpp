#include<iostream>
using namespace std;
int Search(int arr[],int n,int element){


    int mid, lf=0,rt=n-1;
    while(lf<=rt){
        mid=(lf+rt)/2;
        if(arr[mid]==element){
            cout<<"Element found at index: "<<mid<<"\n";
            return 0;
        }
        else if(arr[mid]<element){
            lf=mid+1;
        }
        else{
            rt=mid-1;
        }
    }
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