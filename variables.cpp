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
    //adress does not change
    cout << &A << endl;

    int iPrimeNr; //Hungarian Notation

    /*
     *  1. Variables can't have the same name in the same scope
     *  2. Variables can't start from numbers
     *  3. Can't use spaces but can use _
     *  4. Variables should be self-descriptive
     *  5. Can't use special characters and all that jazz
     *  6. Variables should be nouns
     */
}
