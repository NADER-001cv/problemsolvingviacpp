#include <iostream>
#include <cstdlib>


using namespace std;

//  declaration function
int  MySum(int x, int y,int z = 0,int w = 0)
{

  return (x + y + z  + w);
}
 

int main()
{


cout<< MySum(10,20,30,40)<<endl ;
cout<< MySum(10,20)<<endl ;
cout<< MySum(10,20,30 )<<endl ;

    system("pause") ;
    return 0    ;
}

//  definition of function
