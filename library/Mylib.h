#pragma once 

#include <iostream>

using namespace std;


namespace Mylib{

    void Test()
    {
        cout <<"My first test in my library" << endl;
    }

    int MySum(int a ,int b)
    {

        return (a + b) ;
    }
}