#include <iostream>
#include <cstdlib>


using namespace std;

int MySum(int a , int b , int c = 0 , int d=0) ;


int main()
{

      cout<< MySum(10,20) << endl;
      cout<< MySum(10,20,30) << endl;
      cout<< MySum(10,20 ,30,40) << endl;

    system("pause") ;
    return 0    ;
}

int MySum(int a , int b , int c = 0 , int d=0)
{

    return (a + b + c + d) ;
}