#include<iostream>
using namespace std;

int main(){
    char n;
    cout << "give input\n";
    cin >> n;

    // if(n == 'a'){
    //     cout << "hello"<<endl;
    // }
    // else if(n == 'b'){
    //     cout<< "namaste" << endl;
    // }
    // else{
    //     cout << "how are you" << endl;
    // }


    switch (n)
    {
    case 'a':
        cout << "hello\n" << endl;
        break;
    case 'b':
        cout << "hi\n" << endl;
        break;
    case 'c':
        cout << "how\n" << endl;
        break;
    
    default:
        cout << "bye" << endl;
        break;
    }
    return 0;
}