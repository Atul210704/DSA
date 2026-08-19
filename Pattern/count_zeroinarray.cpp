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
    int zero=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zero++;
        }

    }
    
    cout<<"Number of zero elements in the array:"<<zero;
            
        
        
        
        return 0;

}
