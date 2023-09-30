#include<iostream>
using namespace std;

int main(){

    float a,b;
    char button;
    cout << "input the variables";
    cin >> a >> b;
    cout << "input expression" << endl;
    cin >> button;

    switch (button)
    {
    case '+':
        cout << a+b << endl;
        break;

    case '-':
        cout << a-b << endl;
        break;
        
    case '/':
        cout << a/b << endl;
        break;
        
    case '*':
        cout << a*b << endl;
        break;
    
    default:
        cout << " inc=valid expression" << endl;
        break;
    }

    return 0;
}