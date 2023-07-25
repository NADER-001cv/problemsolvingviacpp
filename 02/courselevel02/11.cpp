#include <iostream>
#include <cstdlib>


using namespace std;


int main()
{

int array[] = {1,2,3,4,5,6,7} ;
//naw3ha nafess el7ga ely nmchy feha coollection array hna collection of item
// berou7 ey jyb awl 3onser w ey 7otoo fyy n

for(int n : array)
{
   cout<<n<<endl;
}

cout<<"\n \n -------------------------------- \n \n"<<endl;
for(int n : {1,2,3,4,5,6,7,8,9,10,11})
{
   cout<<n<<endl;
}

    system("pause") ;
    return 0    ;
}