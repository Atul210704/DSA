#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter size of array:";
    cin>>n;
    int arr[n];
    cout<< "Enter array elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int largest=arr[0];
    int second_largest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    //second largest element
    for(int i=0; i<n; i++){
        if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
    
        }

    }
    cout<<second_largest;
    return 0;
    
    }
 