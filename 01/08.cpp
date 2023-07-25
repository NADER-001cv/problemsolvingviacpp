#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>


using namespace std; 

int ReadPositiveNumber(string message)
{
   int number = 0;
   do{
    cout<<message<<endl ;
    cin>>number;
   }while(number <0) ;
  return number; 
}

int RandomNumber(int From,int To)
{
    int randnumber = 0;
    randnumber = rand() % (From -To +1 ) + From;

    return randnumber  ;
}


  void ReadArrayNumbeRandom(int fillArray[100] , int &arrlength)
  {
      for(int i = 0; i < arrlength; i++)
      {

            fillArray[i] = RandomNumber(1,100) ;
      }

  }


  void  PrintArrayNumbeRandom(int fillArray[100] , int arrlength)
  {
       cout<<"Array Elements  " ;

       for(int i = 0; i < arrlength; i++)
       {
            cout<<" "<<fillArray[i]<<" ";
       }
       cout<<"\n" ;
  }

  int MaxNumberBeRandom(int fillArray[100] , int arrlength)
  {
        int Max = 0 ;
        
          for(int i = 0; i < arrlength; i++)
          {
                if(fillArray[i] > Max)
                {
                    Max = fillArray[i] ;
                }

          }
          return Max ;
  }
  
int main()
{

    srand((unsigned) time(NULL)) ;
     int fillArray[100] = {} ,arrlength ;
       arrlength = ReadPositiveNumber("Enter a random number") ;
ReadArrayNumbeRandom(fillArray, arrlength) ;

PrintArrayNumbeRandom(fillArray, arrlength) ;
cout<<"Max Number is  "<<MaxNumberBeRandom(fillArray ,arrlength) <<endl ;
      system("pause")  ;
    return 0 ;
}