#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool isSorted = true;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;

        }
        

    }
    if(isSorted){
        cout<<"Array is Sorted:";
    }
    else{
        cout<<"Array is not Sorted:";

    }
    return 0;

}