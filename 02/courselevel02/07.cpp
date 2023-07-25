#include <iostream>
#include <cstdlib>


using namespace std;

void  function4()
{
    cout<<"Hi I am function 4"<<endl;
}
void  function3()
{
    function4();
}
void  function2()
{
   function3();
}
void  function1()
{
   function2();
}


int main()
{

function1();

    system("pause") ;
    return 0    ;
}