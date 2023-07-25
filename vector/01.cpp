#include <iostream>
#include <vector>


using namespace std;


int  main()
{

vector <int> vNumbers = {10,20,30,40,50}  ;

cout <<"\n vector numbers" ;
for(int number :vNumbers)
{
    cout<<" "<<number ;
}

cout<<endl ;
   system("pause");
    return 0 ;
}