// TOPICS COVERED = For/ while, break, continue, do while

#include <iostream>
using namespace std ;

int main()
{
    // for(int i = 0 ; i < 5 ; i++)
    // {
    //     cout<<i <<endl ;
    // }


    // int i = 0 ;
    // while(i <= 11)
    // {
    //     cout<< i <<endl;
    //     i++ ;
    // }


    // LOOP CONTROLLING
    // Break  = the loop get stopped at that execution time  
    // Continue = skip that part but loop will continue 
    // for(int i = 0 ; i < 10 ; i++)
    // {
        
    //     if(i == 4)
    //     continue ;
    //     if(i == 6)
    //     break ;
    //     cout<<i<<endl ;
    // }


    // DO WHILE 
    // do{

    // }while(condition) ;
    int i = 0 ;
    do{
        cout<< i << " " ;
        i++ ;
    }while(i <= 5) ;
    cout<< i << endl ;

}