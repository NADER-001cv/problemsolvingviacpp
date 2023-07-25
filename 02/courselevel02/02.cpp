#include <iostream>


using namespace std;




int  ReadNumberFromUser(string message)
{
	int  number ;

    cout  << message << endl;
        cin >> number;
	return number;
}
int  main()
{
	string result2 ;

int  Mark = ReadNumberFromUser("Enter a number ") ;


result2 = Mark ==  0 ? "ZERO" :Mark >0 ? "POSTIFE" : "NEGATIFE";

cout<<"The result is: \t"<<result2<<endl;
	  system("pause")  ;
	return 0;
}