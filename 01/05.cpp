#include <iostream>
#include <cstdlib>


using namespace std;


int RandomNumber(int From ,int To)
{
    int randnumber = rand() % (From -To + 1) + From ;

    return randnumber ;

}

enum characterType {smallLetter =1 ,capitalLetter =2,specialLetter =3,digit =4}  ;

char getCharactertype(characterType enchartype)
{
    switch(enchartype)
    {
        case characterType::smallLetter:
        {
              return char(RandomNumber(97,122)) ;
        break;
        }
        case characterType::capitalLetter:
        {
             return char(RandomNumber(65,90)) ;
        break;
        }
        case characterType::specialLetter:
        {
            return char(RandomNumber(33,47)) ;
        break;
        }
        case characterType::digit:
       {
         return char(RandomNumber(48,57)) ;
        break;
       }
       


    }
}


void displayCharactertype()
{

    cout<<"Character type is small \t"<<getCharactertype(characterType::smallLetter)<<endl ;
    cout<<"Character type is capital \t "<<getCharactertype(characterType::capitalLetter)<<endl ;
    cout<<"Character type is special \t"<<getCharactertype(characterType::specialLetter)<<endl ;
    cout<<"Character type is digit \t"<<getCharactertype(characterType::digit)<<endl ;
    
}

int main()
{

srand((unsigned)time(NULL)) ;

displayCharactertype() ;

    system("pause") ;
    return 0    ;
}