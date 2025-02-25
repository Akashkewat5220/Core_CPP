#include <iostream>
using namespace std ;

class Animal{
    public:
    void eat()
    {
        cout<<"this animal eaaats food"<<endl ;
    }
}; 

// derived class 
class Dog : public Animal{
    public:
    void bark()
    {
        cout<<"|the dog barks"<<endl ;
    }
} ;

int main()
{
    Dog d ;
    d.eat() ;
    d.bark() ;
    return 0 ;
}