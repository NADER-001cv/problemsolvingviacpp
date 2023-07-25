#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>



using namespace std;


int ReadPositiveNumber(string message)
{
    int nbr = 0;
    do{
        cout << message <<endl;
        cin >> nbr;
    }while(nbr <0) ;
      return nbr ;
}

int ReadNumberRandom(int From,int To)
{
    int nbr ;
    nbr = rand() %(From -To +1) + From ;

    return nbr ;

}

void ReadNumberFillToarray(int fillNumberRandom[100]  ,int &arrlength)
{

            for(int i = 0; i < arrlength; i++)
            {
                    fillNumberRandom[i] = ReadNumberRandom(1,100) ;
            }
}

void PrintNumberFillToarray(int fillNumberRandom[100],int &arrlength)
{
   cout<<"Array Elments: " ;
   for(int i = 0; i < arrlength; i++)
   {
        cout<<"  "<<fillNumberRandom[i] ;
   }
   cout<<"\n"  ;

}

float AverageNumberRandom(int fillNumberRandom[100],int &arrlength)
{
            float  sum = 0 ;
            float avg = 0 ;

            for(int i = 0; i < arrlength; i++)
            {
                sum += fillNumberRandom[i] ;
            }

   avg =   (float) (sum / arrlength );

   return avg ;

}

int main()
{
      srand((unsigned) time(NULL)) ;
      int fillNumberRandom[100] ={} ,arrlength ;
        arrlength = ReadPositiveNumber("Enter a random number")  ;
 ReadNumberFillToarray(fillNumberRandom ,arrlength) ;
 PrintNumberFillToarray(fillNumberRandom ,arrlength) ;
cout<<"Average of All Numbers  is "<<AverageNumberRandom(fillNumberRandom ,arrlength)<<endl ;
     system("pause")  ;
    return 0;
}
