#include<iostream>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    // int a;
    // a = 12;
    // cout << "size of a - " << sizeof(a)<<endl;

    // float b;
    // b = 30;
    // cout << "size of b - " << sizeof(b) <<endl;


    // int am1;
    // cin >> am1;

    // int am2;
    // cin >> am2;

    // int sum = am1 + am2;
    // cout << "sum\n";
    // cout << sum << endl;


    int amount;
    cin >> amount;

    if(amount>500){
        if (amount > 1000){
            cout << "Trip \n";
        }
        else{
            cout << "Lunch\n";
        }
    }
    else if(amount > 200 && amount < 400){
        cout << "rashmi\n";
    }
    else{
        cout << "friends\n";
    }

    
    return 0;
}