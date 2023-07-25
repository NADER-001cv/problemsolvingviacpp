#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>


using namespace std; 

int RandomNumber(int From,int To)
{
    int numberand = rand()%(From -To +1) + From  ;

        return  numberand ;

}

int ReadPositiveNumber(string message)
{
        int number = 0 ;
        do{
            cout<<message << endl;
            cin>>number ;
        }while(number <0) ;
}


void ReadNumbderRandomArray(int arrnumbeRand[100] , int &arrLength)
{
        for(int i = 0; i < arrLength ;i++)
        {
                arrnumbeRand[i] = RandomNumber(1,100) ;

        }
    
}


void PrintNumberRandom(int  arrnumbeRand[100] , int &arrLength)
{
            cout<<"Array Elements ";
      for(int i = 0; i < arrLength ;i++)
        {
             cout<< "  "<<  arrnumbeRand[i]  ;

        }
        cout<<"\n" ;
}



int main()
{
srand((unsigned) time(NULL)) ;

 int arrnumbeRand[100] = {}  ,arrLength ;
  arrLength = ReadPositiveNumber("Enter a random number length") ;
ReadNumbderRandomArray(arrnumbeRand,arrLength)  ;

PrintNumberRandom(arrnumbeRand,arrLength) ;
        system("pause") ;
    return 0;
}