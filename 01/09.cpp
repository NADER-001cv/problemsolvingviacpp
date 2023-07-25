#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>



using namespace std;
 
 int ReadPositiveNumber(string message)
 {
    int number = 0;
        do{
            cout<<message<<endl;
            cin >> number;
        }while(number<0) ;

        return number;

 }
 int RandomNumber(int From,int To)
 {
    int randomnbr =  0 ;

    randomnbr = rand() %(From - To + 1) + From ;

    return randomnbr ;

 }

 void ReadNumberRandom(int arrFillNumberRandom[100] ,int &arrlength)
 {

            for(int i = 0; i < arrlength; i++)
            {
                arrFillNumberRandom[i] = RandomNumber(1,100) ;
            }

 }
 void PrintNumberRandom(int arrFillNumberRandom[100] ,int &arrlength)
 {
    cout<<"Array Elements : " ;

    for(int i = 0; i < arrlength; i++)
    {
        cout<<arrFillNumberRandom[i] <<" " ;
    }

    cout<<"\n" ;
 }

int PrintMinNumberRandom(int arrFillNumberRandom[100] ,int arrlength)
{
          int Min =arrFillNumberRandom[0] ;

          for(int i = 0; i < arrlength; i++)
          {
            if(arrFillNumberRandom[i] < Min)
              {
                  Min = arrFillNumberRandom[i] ;
              }
          }
        return Min ;
}


int main()
{
    srand((unsigned) time(NULL)) ;
int arrFillNumberRandom[100] ,arrlength ;
arrlength = ReadPositiveNumber("Enter a number positive") ;
ReadNumberRandom(arrFillNumberRandom,arrlength) ;
     PrintNumberRandom(arrFillNumberRandom,arrlength) ;

     cout<<"Min Number is "<<PrintMinNumberRandom(arrFillNumberRandom,arrlength)<<"\n" ;
     system("pause") ;
    return 0;
}