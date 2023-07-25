
#include <iostream>
#include <cstdlib>


using namespace std;


void Myfunc()
{
    static int number = 1 ;
    cout <<"Mynumber si static live all programing"<<number<<endl ;
    number++ ;

}

int main()
{
Myfunc();
Myfunc();
Myfunc();

    system("pause") ;
    return 0    ;
}