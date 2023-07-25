#include <iostream>
#include <cstdlib>


using namespace std;

int ReadNumber()
{
    int Number = 0 ;
    cout<<"Enter your number \n" ;
    cin >>Number ;

    while(cin.fail())
    {
        cin.clear() ;
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');       
         cout << "Invalid Number, Enter a valid one:" << endl;  
             
      cin >> Number;
    }

    return Number ;
}


int main()
{

cout<<"Your Number is \t"<<ReadNumber()<<endl;
    system("pause") ;
    return 0    ;
}