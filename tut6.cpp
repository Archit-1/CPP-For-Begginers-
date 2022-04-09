#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // int a =34;
    // cout<<"The value of a was "<<a<<endl;
    // // a= 45;
    // const int a =3.11; //Constant is C++
    // cout<<"the value is"<<a<<endl;
    // a = 44;//you will get error because a is constant
    // cout<<"the value is"<<a<<endl;
    // ***************Manipulators******************
    int a = 23, b = 34, c = 3;
    cout << "the value of a with setw" << setw(12) << a << endl;
    cout << "the value of b with setw" << setw(12) << b << endl;
    cout << "the value of c with setw" << setw(12) << c << endl;

    cout << "the value of a without setw" << a << endl;
    cout << "the value of b without setw" << b << endl;
    cout << "the value of c without setw" << c << endl;

    return 0;
}