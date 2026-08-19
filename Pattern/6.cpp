/*#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for (int row=1; row<=n; row++){
        for(int col=1; col<=row-1; col++){
            cout <<" ";
        }
        for(int col=1; col<=2*n-2*row+1; col++){
            cout <<"* ";
        }
        cout <<endl;
    }
} */

#include<iostream>
using namespace std;
int main(){
    int n= 4;
    for (int row=1; row<=n; row++){
        for(int col=1; col<=6; col++){
            if(row==1 || row==n ){
                cout <<"* ";
            }
            else{
                if(col==1){
                    cout <<"* ";
                }
                else if(col==6){
                    cout<<"* ";
                }
                else{
                    cout <<"  ";
                }
            }
        }
        cout <<endl;

    }
}