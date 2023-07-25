#include <iostream>
#include <cstdlib>


using namespace std;


int RandomNumber(int From,int To)
{
    int numberand = rand()%(From -To +1) + From  ;

        return  numberand ;

}

void DiplayRandomNumber()
{
    for(int i = 0; i <=2 ;i++)
    {
        cout<<"The Random number "<<i + 1 <<" is \t"<<RandomNumber(1,10)<<endl;
      
   
      
    }

  cout<<"\n ################################ \n" ;
   cout<<"\n ################################ \n" ;
    for(int i = 0; i <=2 ;i++)
    {
    
       
        cout<<"The Random number "<<i + 1 <<" is \t"<<RandomNumber(1,5)<<endl;
      
    }
}

int main()
{
srand((unsigned) time(NULL)) ;
DiplayRandomNumber() ;
    system("pause") ;
    return 0    ;
}