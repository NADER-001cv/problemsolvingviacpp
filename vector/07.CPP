#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

struct stEmployee{
    string firstName ;
    string lastName ;
    double salary ;
};

int main()
{
vector <stEmployee> vEmployee ;

stEmployee  tempEmployee ;

tempEmployee.firstName = "Nader";
tempEmployee.lastName = "Chargui";
tempEmployee.salary =5200 ;

vEmployee.push_back(tempEmployee);
tempEmployee.firstName = "Ahmed";
tempEmployee.lastName = "Chargui";
tempEmployee.salary =200 ;

vEmployee.push_back(tempEmployee);
tempEmployee.firstName = "Aydaa";
tempEmployee.lastName = "Chargui";
tempEmployee.salary =4400 ;

vEmployee.push_back(tempEmployee);
static int count =0;
for(stEmployee &emp : vEmployee)
{

cout<<"Employee Number  "<<count +1<<endl;
  cout<<emp.firstName <<endl ;
  cout<<emp.lastName <<endl ;
  cout<<emp.salary <<endl ;
  count++ ;
cout<<"\n  ########################### \n";
}

    system("pause") ;
    return 0    ;
}