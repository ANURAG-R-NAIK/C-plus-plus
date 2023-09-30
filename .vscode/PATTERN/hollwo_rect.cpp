#include<iostream>
using namespace std;

int main(){

    int row, col;
    cin >> row >> col;

    for(int i = 1;i<=row;i++){

        for(int j = 1;j<=col;j++){

            if(i == 1 || i == row || j == 1 || j == col){ 
                // only if the index of i and j is either the first or the last then only star rest we put spaces
                cout << '*';
            }
            else{
                cout << ' ';
            }
            
        }
        cout << endl;
    }

    return 0;
}