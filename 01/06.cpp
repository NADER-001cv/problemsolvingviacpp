#include <iostream>
#include <cstdlib>


using namespace std;

int RandomNumber(int From,int To)
{
    int numberandom = rand() %(From -To +1) + From ;
    return numberandom ;
}
enum characterType {smallLetter =1 ,capitalLetter =2,specialLetter =3,digit =4}  ;

int ReadNumberPositive(string message)
{
    int number = 0 ;
    do{
        cout<<message<<endl;
        cin >> number ;
    }while(number <0) ;

    return number ;
}

char getCharacterType(characterType character)
{
    switch(character)
    {
        case characterType::capitalLetter:
        {
            return char(RandomNumber(65,90)) ;
            break;
        }
    }
}

string getword()
{
string word = "";

for(int i = 1; i <=4;i++)
{
    word += getCharacterType(characterType::capitalLetter) ;
}

return word ; 
}

string generateKey()
{
    string key ="" ;
    for(int i = 1; i <=4;i++)
{
    key += getword() +"-" ;
    if(i ==4)
    key += getword() ;
}

return key ;
}

void DisplayKeyGenerate(short number)
{
        for(int i=0; i<=number; i++)
        {
           cout<<"Key [ "<< i+1<<" ]\t"<< generateKey() <<endl;
        }
}

int main()
{

DisplayKeyGenerate(ReadNumberPositive("Enter the number")) ;
    system("pause") ;
    return 0    ;
}