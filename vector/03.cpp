#include <iostream>
#include <vector>


using namespace std;

void ReadVectorNumber(vector<int>   &number)
{
    bool isreapeted = true ;
    char ch ='y' ;
 int nbr  =0 ;
    do{
  cout<<"Do you want to add other numbers? "<<endl;
  
   
    cin >>ch  ;
   
 if(ch == 'y')
 {
   cin>>nbr ;
    number.push_back(nbr) ;
 }else{
    isreapeted = !true ;
 }

    }while(isreapeted);

}

void PrintVectorNumber(vector<int> number)
{
     cout<<"\n \n \n"  ;
    for(int Nbr :number)
    {
        cout << " " << Nbr ;
    }
    cout<<"\n"  ;
}

int main()
{

      vector <int>  vNumbers ;

ReadVectorNumber(vNumbers) ;
  PrintVectorNumber(vNumbers)  ;
        system("pause")        ;
    return  0;
}