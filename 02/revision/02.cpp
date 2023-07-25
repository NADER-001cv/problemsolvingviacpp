#include <iostream>


using namespace std;

int ReadNumber(string  message)
{

int number = 0 ;
    cout <<message <<endl;
     cin >> number;

     return number;
}



int main()
{
   
   
    int Nbrispositife  = ReadNumber("Enter your number \n");

    string result ;
     Nbrispositife >0 ? cout<<"The number is positife\n":cout<<"The number is negatife\n" ;


      system("pause") ;
    return 0 ;
}