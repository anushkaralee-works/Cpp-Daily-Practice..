#include<iostream>

using namespace std;
int glo = 7;
void sum(){
    int a ;
    cout<< glo;
}

int main() {
    int glo = 8;
    glo = 6;
    // int a = 7;
    // int b = 9;
    int a = 7, b = 9;
    const float pi = 3.14;  
    char c = 'A';
    bool is_true = false;    // IN BOOL THE VALUE OF TRUE IS 1 AND VALUE OF FALSE IS 0
    sum();
    cout<< glo << is_true;
    // cout<< "This is all about variable scope and data types in C++ . \nHere the value of a is : "<<a<<" \nAnd the value of b is: "<<b;
    // cout<< "\nThe value of pi is : "<<pi;
    // cout<< "\nThe value of c is : "<<c;
   
    return 0;
}