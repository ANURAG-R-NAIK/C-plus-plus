#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 2 == 0 && n % 3 == 0){
        cout << " div by both" << endl;
    }
    else if(n % 2 == 0){
        cout << "div by 2 only" << endl;
    }
    else if(n % 3 == 0){
        cout << "div by 3" << endl;
    }
    else{
        cout << "not div by both" << endl;
    }
}