#include <iostream>
#include <cstdlib>


using namespace std;


void PrintNumbers(int M,int N)
{
    if(M >= N )
    {
        cout<<"M: "<<M<<endl ;
        PrintNumbers(M -1,N) ;
    }
}

int main()
{

PrintNumbers(10,1)  ;
    system("pause") ;
    return 0    ;
}