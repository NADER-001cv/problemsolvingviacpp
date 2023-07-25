#include <iostream>
#include <string>

using namespace std;

struct Stowner{

    string FullName ;
    int Phone ;
} ;








struct Car{
    string model ;
    string brand ;
    int year ;
    Stowner owner ;
} ;

struct Adress {
    string street ;
    string city ;
    string country ;
    int no_street ;
};

int main(){

     Car mycar1 ,mycar2 ,mycar ;
     mycar1.brand = "bmw"; mycar1.year =1980 ;
     mycar1.model = "x5" ;
     Adress myAdress ;
     myAdress.street = "nhgg  ansar"; 
     myAdress.country = "US" ; myAdress.city = "new work";
     myAdress.no_street = 150;
     cout<<"********************************* \n \n" ;

     mycar2.brand = "marchadess";
     mycar.brand = mycar1.brand + "  " + mycar2.brand  ;
mycar1.owner.FullName ="nader chargui"  ;
mycar1.owner.Phone = 56148514 ;

     cout << mycar.brand << endl;

cout<<mycar1.owner.FullName << endl ;
cout<<mycar1.owner.Phone<<endl ;
     system("pause")  ;
    return 0;
}