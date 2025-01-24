// TOPICS COVERED = Variables, Datatypes, Operators

#include <iostream>
using namespace std ;

int main(){
    // int num1 ;
    // string word ;
    // cout<<"Enter your name" ;
    // cin>>word ;
    // cout<<"Enter your name :" <<word<<endl ;

    string sentence ;
    cin.ignore(3) ;         //Use to ignore some no. of characters from beginning
    getline(cin, sentence) ;            // Used to take one sentence as input
    cout<<sentence ;

    // Variables
    int const a = 2 ;           // a will not be modifiable in future code ;
    
}

