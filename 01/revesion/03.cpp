#include <iostream>


using namespace std;

void ReadGrades(float x[3])
{
cout<<"Please Enter grade number1?\n";
cin>>x[0];
cout<<"Please Enter grade number2?\n";
cin>>x[1];
cout<<"Please Enter grade number3?\n";
cin>>x[2];

}

float AvergeGrades(float x[3])
{
float avg = 0;
avg =(x[0] + x[1] + x[2]) /3 ;

return avg;



}
void PrintGrade(float x[3])
{
    cout<<"\n ********************************\n" ;
    cout<<AvergeGrades(x) ;
}

int main()
{
float x[3] ;
    ReadGrades(x) ;
    PrintGrade(x) ;
    system("pause") ;
    return 0 ;
}