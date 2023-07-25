#include <iostream>
#include<array> 

using namespace std;
 int elementsofarray  ;
void ReadElements(int element[])
{

 
    for(int i = 0; i < ::elementsofarray; i++)
    {
           //   cout<<"Please enter number ? "<<" \t"<<i +1 <<endl;

                  cout<<"Element  [" <<i +1 << "] : "<<"  ";
             cin>>element[i];
    }

}

short CheckNumberOfElements(string message)
{
    int numbercheck  ;
      
      do{

         cout<<message ;
            cin>>numbercheck ;
      }while(numbercheck <0) ;

    return numbercheck ;


}

void PrintArrayElement(int  element[])
{
    cout<<"**************************\n";
     int check = CheckNumberOfElements("Enter the you want to check ") ;
        int count = 0;
     cout<<check <<"  \n"  ;
      cout<<"Original array   ";
     for(int i = 0 ; i < ::elementsofarray; i++)
    {
            
             cout <<element[i] <<" ";
             if(element[i] == check)
             {
                count++;
             }
    }
    
       cout<<"\n"<<check <<" is repeated "<<count<<" time (s)"<<endl  ;


}

 


int main()
{

  
   cout<<"Enter array elements"<<endl;
   cin>>::elementsofarray ;

   int element[::elementsofarray]  ;

ReadElements(element) ;
PrintArrayElement(element) ;
   system("pause");
    return 0 ;
}