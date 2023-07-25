#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int ReadNumber(string message)
{
     int number =0 ;
     do{
       cout<<message ;
       cin>>number ;
     }while(number<0);

   return number ;
}

void  ReadVectorNumber(vector   <int> &vnumbers)
{
char ReadMore = 'Y' ;
  while(ReadMore == 'Y'  | ReadMore =='y')
  {
    int  number =ReadNumber( "Please enter a number? ") ;
    vnumbers.push_back(number) ;
     cout << "\nDo you want to read more numbers? Y/N ?";   
           cin >> ReadMore;
  }
}

void PrintVectorNumbers(vector <int> vnumbers)
{
    cout <<"Numbers of vectors is \n" ;

    for(int &number : vnumbers)
    {
        cout<<"  "<<number ;
    }
    cout<<endl ;
}




int main()
{
vector <int>  vNumbers ;

ReadVectorNumber(vNumbers) ;
PrintVectorNumbers(vNumbers) ;
    system("pause") ;
    return 0    ;
}