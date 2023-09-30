#include<iostream>
using namespace std;

int main(){
    
    for(int i = 0; i<30; i++){

        if(i % 2 == 0){
            cout << "you can go" << endl;
        }
        else{
            cout << "cannot go" << endl;
        }
    }

    return 0;
}