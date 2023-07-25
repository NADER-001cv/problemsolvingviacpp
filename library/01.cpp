#include <iostream>
#include "Mylib.h" ;
#include "Myinputlib.h" ;


using namespace std;






int main()
{

  Mylib::Test() ;

  int  result = Mylib::MySum(10,20) ;
int number = MyInputlib::ReadNumber() ;
cout<<"Number \t"<<number<<endl ; 

  cout<<result<<endl;
   system("pause") ;
    return 0;
}