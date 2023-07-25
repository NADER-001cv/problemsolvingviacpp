#include <iostream>



using namespace std ;

enum Color {red, green, blue, black} ;
enum Direction {North,South,East,West} ;
enum Week {Sat, Sun, Mon, Tue,Wed,Thu,Fri}  ;
enum Gender {Male,Female} ;
enum Status {Single,Married} ;



int main()
{

Color MyColor ;

MyColor = Color::blue ;
  
  if(MyColor == Color::blue) cout<<"MyColor is  "<<MyColor <<endl ;

    system("pause") ;
      return  0 ;
}