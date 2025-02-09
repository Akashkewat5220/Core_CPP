#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

class car {
    private:
    string brand ;
    int speed ;

    public:
    void setbrand(string b)
    {
        brand = b ;
    }

    string getbrand()
    {
        return brand ;
    }

    void show_details() {
        cout<<brand <<endl ;
        cout<< speed << endl ;
    }
};

int main()
{
    car my_Car ;
    // my_Car.brand = "Maruti" ;
    // my_Car.speed = 10 ;

    // cout<< my_Car.brand <<" "<< my_Car.speed<< endl ;
    // my_Car.show_details() ;

    my_Car.setbrand("Maruti") ;
    my_Car.getbrand() ;

    my_Car.show_details() ;

}