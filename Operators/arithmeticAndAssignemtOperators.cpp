#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 4;

    cout << a + b << endl; //addition
    cout << a - b << endl; //subtraction
    cout << a * b << endl;
    cout << a / b << endl;
    //2.5 only if the var in the ornigal has a double or a float
    cout << a % b << endl; // remainder 
    //incremation by 1
    //decremeation by 1
    a += 1; 
    a++; //incremation
    b--; //decremeation

    cout << a << endl;
    //POSTincremation means the d++ returns a before the operation and therefore can be used to add one while also returning its orginal var
    cout << a++ << endl;
    cout << a << endl;
    //PREincremation 
    cout << ++a << endl;
}