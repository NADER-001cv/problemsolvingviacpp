#include <iostream>
#include <string.h>

using namespace std;

string ReadName(string m)
{

    string name ;
    cout<< m<<endl;
    cin >> name;
       return name ;
}


void WriteName(string name)
{
        cout<< name<<endl;
}

int main()
{

  WriteName(ReadName("Enter Name"));


    system("pause") ;
    return 0;
}