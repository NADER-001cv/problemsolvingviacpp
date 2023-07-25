#include <iostream>
#include <cstdlib>


using namespace std;

int RandomNumber(int From,int To) 
{

    int randnumber= rand() % (From - To +1) +From;
return randnumber ;

}

int main()
{

srand((unsigned)time(NULL)) ;

cout<<"##################################### \n" ;
cout<<RandomNumber(10,20) <<endl ;
cout<<RandomNumber(10,20) <<endl ;
cout<<RandomNumber(10,20) <<endl ;
cout<<RandomNumber(10,20) <<endl ;

    system("pause") ;
    return 0    ;
}