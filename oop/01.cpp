#include <iostream>

using namespace std ;



class ClsPerson {
 public :
 string FirstName ;
 string LastName ;
 string FullName()
 {
    return FirstName + "  " + LastName   ;
 }

} ;


int main()
{
   ClsPerson person ;
   person.FirstName ="nader" ;
   person.LastName = "chargui" ;

   cout<<person.FullName() << endl;
     system("pause") ;
     return 0 ;
}