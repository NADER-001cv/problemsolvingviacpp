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
    float marks[3] ;
}  ;

struct  distance_type{
    int feet ;
    float inches ;
} ;

void fillstudentlist(Student x[5])
{
    
for(int i = 0; i <5 ; i++) 
{
    cout<<"enter the fname and lname of student"<<i+1<<endl;
    cin>>x[i].fname >> x[i].lname;
    cout<<"\n" ;
}
}

void printstudentlist(Student x[5])
{
    
for(int i = 0; i <5 ; i++) 
{
    cout<<"enter the fname and lname of student"<<i+1<<endl;
    cout<< x[i].fname <<" "<< x[i].lname;
    cout<<"\n" ;
}
}

int main()
{

Student s1 ,x[5] ;

s1.student_no = 10 ;
s1.fname ="ali" ;

s1.lname ="chargui"  ;
s1.course = "software engeneer" ;
s1.marks[0]  =10.2 ;
s1.marks[1] =15.5 ;
s1.marks[2] = 15.3 ;

// x[0].student_no = 12 ;
// x[0].fname = "student1" ;
// x[0].lname = "student2" ;
// x[0].course = "course1" ;
// x[0].marks[0] =100.2 ;
// x[0].marks[1] =150.5 ;
// x[0].marks[2] =150.3 ;




fillstudentlist(x);
printstudentlist(x);
    system("pause")  ;
    return 0;
}

