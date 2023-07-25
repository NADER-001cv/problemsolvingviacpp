#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>



using namespace std;

int ReadPositiveNumber(string message)
{
    int nbr = 0 ;
    do{
        cout<<message<<endl ;
        cin>>nbr ;
    }while(nbr <0) ;

    return nbr ;
}

int RandomNumber(int From , int To)
{
       int randomnbr =  0 ;

    randomnbr = rand() %(From - To + 1) + From ;

    return randomnbr ;

}

void ReadNumberRandom(int arrFillNumberRandom[100] ,int &arrlength)
{
              for(int i =0 ; i <arrlength ;i++)
              {
                    arrFillNumberRandom[i] =RandomNumber(1,100) ;
              }

}

void PrintArrayRandom(int arrFillNumberRandom[100] ,int arrlength)
{
            cout<<"Array of Elements " ;
            for(int i =0 ; i<arrlength ;i++)
            {
                cout<<" " <<arrFillNumberRandom[i] ;
            }
            cout<<"\n" ;
}

int SumNumberRandom(int arrFillNumberRandom[100] ,int arrlength)
{
    int sum =0 ;

    for(int i=0 ;i <arrlength ;i++)
    {
        sum += arrFillNumberRandom[i] ;
    }

    return sum ;
}

int main()
{
    srand((unsigned) time(NULL)) ;
int arrFillNumberRandom[100] ,arrlength ;
   arrlength = ReadPositiveNumber("Enter a positive number") ;

   ReadNumberRandom(arrFillNumberRandom ,arrlength) ;
PrintArrayRandom(arrFillNumberRandom ,arrlength) ;

cout<<"Sum of All number is "<<SumNumberRandom(arrFillNumberRandom ,arrlength) <<"\n" ;
        system("pause") ;
    return 0 ;
}