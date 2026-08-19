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
    int target;
    cout<<"Enter target element :";
    cin>>target;
    bool found=false;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            found=true;
            break;
        }
       
    }
    if(found==true){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    
    }
    return 0;
    
}