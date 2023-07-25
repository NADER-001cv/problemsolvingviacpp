#include <iostream>


using namespace std;


int  ReadNumber(string message)
{
	int  number = 0;

	do {
		cout << message << endl;
		cin >> number;
	
	} while (number <0);

	return number;
}

int  main()
{
	string result;

	result = ReadNumber("enter a  number ") > 0 ? "POSTIFE" : "NEGATIFE";
	cout << result << endl;


	  system("pause")  ;
	return 0;
}