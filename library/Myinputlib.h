#pragma once 

#include <iostream>

using namespace std;


namespace MyInputlib{

    int ReadNumber()
    {
        int number = 0;
        cout<<"Please enter your number \n"<<endl;
        cin>>number;
        return number;
    }
};