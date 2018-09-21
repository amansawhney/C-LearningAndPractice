//
// Created by Aman Sawhney on 9/21/18.
//
#include<iostream> //for printings and cout and all that shit


using namespace std;

//address -> pointers connection


int main()
{
    int A = 4; //4 bytes of memory -> 32 bits for 0s and 1s
    // get address => &name_of_variable;

    cout << A << endl;
    cout << &A << endl;

    A = 10;

    cout << A << endl;
    cout << &A << endl;
}
