#include <iostream>
#include <vector>

using namespace std ;



int main()
{

    vector  <int>  vNumbers = {0,1,2,3,4,5,6,7} ;
    cout<<"Number numbers \n" ;

    for(int &number:vNumbers)
    {
        cout<<number<< "  " ;
    }
    cout<<endl ;
      system("pause") ;
    return 0 ;
}