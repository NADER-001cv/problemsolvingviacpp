#include <iostream>


using namespace std;

struct StEmployee{
    int emp_no ;
    string fname ;
    string lname ;
    float  salary ;
    float bonus ;
    float net_salary ;
} ;

struct Student{

    int  student_no ;
    string fname ;
    string lname ;
    string course ;
    float grade ;
}  ;

struct  distance_type{
    int feet ;
    float inches ;
} ;
distance_type add_distance(distance_type d1, distance_type d2) ;


int main()
{

//         StEmployee  e1 , e2 ;
//         e1.emp_no = 1 ;
//         e1.fname = "Nader" ;
//         e1.lname = "Chargui" ;
//         e1.salary = 1500 ;
//         e1.bonus = 200 ;
//         e1.net_salary = e1.salary + e1.bonus ;
//      e2 = e1 ;

//      e2.salary = e1.salary +100 ;
//        cout << e2.salary << endl ;
// string  result ;

//               //  if(e1.salary > e2.salary)
//       result =  e1.salary > e2.salary ?        "the salary of employe 1 greater than employee2 \n" : "the salary of employe 2 greater than employee1" ;
//          cout <<"the result is " << result << endl;       
distance_type x,y ,z;
cout<<"enter the feet and inches for 1st distance"<<endl;
cin >>x.feet >> x.inches ;


cout<<"enter the feet and inches for 2nd distance"<<endl;
cin >>y.feet >> y.inches ;
z= add_distance(x,y) ;
cout  <<" " <<z.feet << "   " << z.inches << endl;
    system("pause")  ;
    return 0;
}

distance_type add_distance(distance_type d1, distance_type d2){

    distance_type result ;
    result.feet=d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    return result ;

}