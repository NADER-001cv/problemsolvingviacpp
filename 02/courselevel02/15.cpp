#include <iostream>
#include <cstdlib>


using namespace std;


void PrintNumber(int N,int M)
{

    if(N <=M)
    {
        cout << N <<endl ;
        PrintNumber(N+1 ,M);
    }

}

int main()
{

  PrintNumber(1,999919) ;
    system("pause") ;
    return 0    ;
}