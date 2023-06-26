#include<iostream>
#include<string>
#include<cmath>
#include "secondfile.h"
using namespace std;



	/*int height;
	int width;
	string ans;
	char symbol;
	
	cout<<"enter the height of a rectangle"<<endl;
	cin>>height;
	cout<<"enter the width of a rectangle"<<endl;
	cin>>width;
	cout<<"enter a character symbol"<<endl;
	cin>> symbol;
	cout<<"do you want to see a hollow or a filled rectangle ? "<<endl;
	
	if(ans =="hollow"){
		int row;
	    int column;
		for(row=3; row>=3; row++){
		for(column=5; column>=5; column++){
			cout<<"@@@@\n@@@@\n@@@@\n@@@@";   
		}
		
		}
	
	
	} else if(ans == "filled"){
	
	
	
	} */

/*int month;
	string month1 = stringstream(month);
	int day;
	int year;
	cout<<" enter a date in the month-day-year format"<<endl;
	cout<<"month-day-year :";
	cin>>month; cout<<"/";
	cin>>day; cout<<"/";
	cin>>year;
	if(day<=31 && month<=12 && year<=9999 ){
		cout<<""
		
		}
}*/




/*
38.
int number=1;
cout<<"Enter a number between 0 and 100"<<endl;
cin>>number; 
cout<<endl;

if(number <=9){

	cout<<"ONE DIGIT BIG";

} else if(number >=10 && number<=99){
	cout<<"TWO DIGIT BIG";



  } else{

	cout<<"OUT OF RANGE";
    }
cout<<endl;

*/
/*
41.
	
int convert;
cout<<" enter 1 to convert a whole number of inches to feet and inches"<<endl;
cout<<" enter 2 to convert a whole number of feet and inches to feet "<<endl;
cout<<" enter 3 convert a whole number of feet and inches to inches"<<endl;
cin>>convert;


switch(convert){


case 1: {
	cout<<"convert a whole number of inches to feet and inches"<<endl;
	cout<<"enter your values to convert them";
    cout<<endl;
    cout<<"enter inches";
    cin>>inches;
	
	int x = (inches/12);
    int y = inches%12; // but modulo does not accept float

    cout<<"you have " <<x << " feet and " <<y <<" inches.";
	break;
		}
case 2: {
	float inche; // the issue was the data type int integers, better to use float.
	cout<<"convert a whole number of feet and inches to feet "<<endl;
	cout<<"enter your values to convert them";
cout<<endl;
cout<<"enter feet";
cin>>feet;
cout<<"enter inches";
cin>>inche;
    float q = inche/12;
  	float p = (feet + q );
	  cout<<"you have " <<p << " feet ";
    break;
		}
case 3: {
	cout<<"convert a whole number of feet and inches to inches"<<endl;
	cout<<"enter your values to convert them";
cout<<endl;
cout<<"enter feet";
cin>>feet;
cout<<"enter inches";
cin>>inches;
 int z = inches + feet*12;
 cout<<"you have " <<z << " inches ";
	break;
		}
default:
	cout<<"wrong input, try again";

}

cout<<endl;



*/


/*
42.
 cout<<"+\n++\n+++\n++++\n+++++\n++++\n+++\n++\n+ ";
 cout<<endl;
 cout<<"     +     +\n      +   +\n       + +\n        +";
 cout<<endl;
 cout<<"      +\n     +++\n    +++++\n   +++++++\n  +++++++++";
 cout<<endl;


*/






/*
check for leap year 
#include <iostream>
using namespace std;

int main() {

  int year;
  cout << "Enter a year: ";
  cin >> year;

  // leap year if perfectly divisible by 400
  if (year % 400 == 0) {
    cout << year << " is a leap year.";
  }
  // not a leap year if divisible by 100
  // but not divisible by 400
  else if (year % 100 == 0) {
    cout << year << " is not a leap year.";
  }
  // leap year if not divisible by 100
  // but divisible by 4
  else if (year % 4 == 0) {
    cout << year << " is a leap year.";
  }
  // all other years are not leap years
  else {
    cout << year << " is not a leap year.";
  }

  return 0;
}

*/

/*
Quadratic equation 
float a;
	float b;
	float c;

	cout<< "Consider the quadradic equation ax^2 + bx + c = 0"<<endl;
	cout<<"enter the value of a, b, c to solve" <<endl;
	cout<< "enter the value of a"<<endl;
	cin>>a;
	cout<<endl;
	cout<< "enter the value of b"; 
	cin>>b;
	cout<<endl;
	cout<< "enter the value of c"; 
	cin>>c;
	cout<<endl;
	float determinant= b*b-4*a*c;
	int y1 = (-b+ sqrt(determinant))/(2*a);
	int y2= (-b-sqrt(determinant))/(2*a);


	cout<< "the solution to the quadratic equation is "<<y1 <<"," <<y2 <<endl;
	if(determinant ==0){ 
		cout<<"solution is real and equal";
	} else if(determinant < 0){

		cout<<"the solution is different and complex";
	} else {
	
	
	cout <<"the solution is real and different";
	};

*/