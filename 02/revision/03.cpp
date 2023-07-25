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
    
        Nbrispositife == 0? cout<<"the number is ZERO \n": Nbrispositife > 0 ?cout<<"the number is POSITIVE \n":cout<<"the number is NEGATIVE \n" ;

      system("pause") ;
    return 0 ;
}