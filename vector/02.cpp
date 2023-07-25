#include <iostream>
#include <vector>


using namespace std;


int  main()
{
vector <string> vNames ;


vNames.push_back("ahmed")  ;
vNames.push_back("ali") ;
vNames.push_back("nader") ;
vNames.push_back("ouday") ;
vNames.push_back("chyma") ;
vNames.push_back("kossay") ;


for(string &name:vNames)
{
cout<<" "<<name ;
}

cout<<endl;
      system("pause")  ;
     return 0  ;
}
