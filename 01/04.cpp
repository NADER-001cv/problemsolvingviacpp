#include <iostream>
#include <cstdlib>


using namespace std;

enum CharacterType {smallLetter = 1,capitalLetter = 2,specialLetter = 3,digit =4} ;

int RandomNumber(int From,int To)
{

    int randomnumber = rand() %(From -To + 1) + From ;

    return randomnumber ;
}

char getRandomCharacter(CharacterType enChartype)
{
            switch (enChartype)
            {
            case  CharacterType::smallLetter :
               return char(RandomNumber(97,122)) ;
                break;
            case  CharacterType::capitalLetter :
               return char(RandomNumber(60,90)) ;
                break;
            case  CharacterType::specialLetter :
               return char(RandomNumber(33,47)) ;
                break;
            case  CharacterType::digit :
               return char(RandomNumber(48,57)) ;
                break;
            
            default:
                break;
            }

}

int main()
{
srand( (unsigned)time(NULL)) ;

cout<<"\n ################################################ \n" ;
cout<<getRandomCharacter(CharacterType::smallLetter) <<endl ;
cout<<getRandomCharacter(CharacterType::capitalLetter) <<endl ;
cout<<getRandomCharacter(CharacterType::specialLetter) <<endl ;
cout<<getRandomCharacter(CharacterType::digit) <<endl ;

cout<<"\n ############################################# \n" ;



cout<<CharacterType::smallLetter <<"\n" ;
cout<<CharacterType::capitalLetter <<"\n" ;
cout<<CharacterType::specialLetter <<"\n" ;
cout<<CharacterType::digit <<"\n" ;

    system("pause") ;
    return 0    ;
}