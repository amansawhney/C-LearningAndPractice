//
// Created by Aman Sawhney on 9/21/18.
//
#include<iostream> //for printings and cout and all that shit


using namespace std;

//address -> pointers connection


int main()
{
    int a = 40, b, c=20; //-2bill to 2bill, 4 BYTES
    //the value for the address of b isn't removed until it is initialized
    b = 0;
    cout << "a : " << a << " a address : " << &a << endl;
    cout << "b : " << b << " b address : " << &b << endl;
    cout << "c : " << c << " c address : " << &c << endl;

    short int t1 = 5; //-32768 to 32767 2 BYTES
    cout << "t1 : " << t1 << " t1 address : " << &t1 << endl;

    float t2 = 5.12; //4 BYTES that are up to 38 zeros
    double t3 = 5.12; //8 BYTES that are up to 308 zeros + greater precision

    char t4; //character

    t4 = 'a';
    cout << t4 << endl;

    string t5 = "Hello ";
    string t6 = "World";

    cout << t5 + t6<< endl;

    bool t7 = true; //false is always 0 and all other are true

    cout << t7 << endl;

    //unsigned short int, 0 to 65535

    unsigned short t8 = 3700;
    cout << t8 << endl;

    const string NAMEOFGAME = "Conqueror of C++"; //consts are uppercase

    cout << NAMEOFGAME << endl;


    /*
     *  1. Variables can't have the same name in the same scope
     *  2. Variables can't start from numbers
     *  3. Can't use spaces but can use _
     *  4. Variables should be self-descriptive
     *  5. Can't use special characters and all that jazz
     *  6. Variables should be nouns
     */
}
