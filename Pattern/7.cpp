#include<iostream>
using namespace std;
int main(){
    int n = 10;
    for(int row=1; row<=n; row++){
        if (row==1 || row == 2 || row == n){
            for(int col = 1; col<=row; col++){
                cout <<"* ";
            }
            cout <<endl;
        }
        else {
            cout <<"* ";
            for(int col=1; col<=(row-2); col++){
                cout <<"  ";
                cout <<"* ";
            }
            cout <<endl;
        }

    }
}