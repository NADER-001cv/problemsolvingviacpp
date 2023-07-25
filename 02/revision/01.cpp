#include <iostream>


using namespace std;


int main()
{
   
     int Mark =90 ;
     string result ;

     if(Mark >= 50)
     {
        result = "PASS" ;
     }else{

        result = "FAIL" ;
     }

      cout <<result <<endl ;
      //using short hand if 
      cout<<"using short hand if  \n \n"<<endl ;
      result = Mark>=50 ? "PASS" : "FAIL";

      cout<<result <<endl ;
      system("pause") ;
    return 0 ;
}