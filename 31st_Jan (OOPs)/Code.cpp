#include<iostream>
#include <bits/stdc++.h>
using namespace std ; 

class student {
    public:
    string name ;
    int age ;

    // constructor
    student() {
        cout<<"called automatically"<<endl ;
        name = "default" ;
        age = 89 ;
    }

    // constructor overloading
    student(string n, int a)
    {
        cout<< "Parameterised constructor" <<endl ;
        name = n ;
        age = a ;
    }
};

int main()
{
    student s1("hell", 8) ;
    cout<< s1.name ;
}