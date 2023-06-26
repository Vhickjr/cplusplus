#include <iostream>
#include<vector>
#include <iomanip>
#include <cmath>
#include<string>
#include "secondfile.h"
using  namespace std;


struct Course {
    string code;
    int unit;
    string grade;
};

int pqsolutions() {
    string name;
    int numCourses;
    int ua = 0;
    int up = 0;
    double ws = 0.0;

    cout << "Enter your name: ";
	cin.ignore();
    getline(cin, name);

    cout << "Enter the number of registered courses in a semester: ";
    cin >> numCourses;

    // Create a vector to store the course information
    vector<Course> courses(numCourses);

    for (int i = 0; i < numCourses; i++) {
        cout << "Enter the course code for course " << i + 1 << ": ";
        cin >> courses[i].code;

        cout << "Enter the course unit for course " << i + 1 << ": ";
        cin >> courses[i].unit;

        cout << "Enter the grade for course " << i + 1 << " (A, B, C, D, E, or F): ";
        cin >> courses[i].grade;

        ua += courses[i].unit; // Increment unit attempted

        if (courses[i].grade == "A") {
            up += courses[i].unit; // Increment unit passed
            ws += courses[i].unit * 5.0; // Increment weighted score
        } else if (courses[i].grade == "B") {
            up += courses[i].unit;
            ws += courses[i].unit * 4.0;
        } else if (courses[i].grade == "C") {
            up += courses[i].unit;
            ws += courses[i].unit * 3.0;
        } else if (courses[i].grade == "D") {
            up += courses[i].unit;
            ws += courses[i].unit * 2.0;
        } else if (courses[i].grade == "E") {
            up += courses[i].unit;
            ws += courses[i].unit * 1.0;
        } else if (courses[i].grade == "F") {
            // No unit passed, so no change in up and ws
        } else {
            cout << "Invalid grade entered. Skipping course " << i + 1 << "." << endl;
        }
    }

    double gpa = (ua != 0) ? ws / ua : 0.0;

    cout << endl;
    cout << "Student Name: " << name << endl;
    cout << "Number of registered courses: " << numCourses << endl;
    cout << "Unit Attempted (UA): " << ua << endl;
    cout << "Unit Passed (UP): " << up << endl;
    cout << "Weighted Score (WS): " << ws << endl;
    cout << "Grade Point Average (GPA): " << gpa << endl;

    return 0;
}

 


/*




*/
/*
print random numbers between two intervals
#include <iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<iomanip>
using namespace std;

int GetRanDomNum( int m){
	
	return rand() % m;
	


};
int GetRanDomNum( int i, int j){
	
	return i+1 + rand() % (j -i -1);
	
};
double GetRanDomNum( ){
	
	
	return (double) rand()/RAND_MAX;


};


int frequentpractice()
{ 

	srand(time(0));
int a;
int b ;
double c ;
int m;

	a = GetRanDomNum(27);

    b =  GetRanDomNum(3,73);

    c = GetRanDomNum();

	cout<<a<<endl;
	cout<<b<<endl;
	cout<<setprecision(3)<<c<<endl;
return 0;
}

*/
/*single array that is filled with by a function and returns random values

void Fill_It(int TheArray[], int sizeOfArray, int seed, int lowRangeValue, int highRangeValue) 

int main()
{
    char restart ='y';
	while(restart =='y')
	{
		const int array_size = 20;
		int firstarray[array_size];
		int secondarray[array_size]; 

		int seed1;
		int seed2;
		int i;

		cout<<"enter your first seed value"<<endl;
		cin>>seed1;
		
		cout<<"enter your second seed value";
		cin>>seed2;

		
		Fill_It(firstarray, array_size, seed1, 0, 1000);
		Fill_It(secondarray, array_size, seed2, 1000, 2000);


		cout<<" First array "<<endl;
		cout<<"seed "<<endl;
		cout<<"values :"<<endl;
		for(i;i<array_size;i++){
		
		cout<<firstarray[i];
		}

		cout<<" Second array "<<endl;
		cout<<"seed "<<endl;
		cout<<"values :"<<endl;

		for(i;i<array_size;i++){
		
		cout<<secondarray[i];
		}


   cout<<"do you want to continue y/n ";
   cin>>restart;
   
   }

   system("pause");
   return 0;
}

void Fill_It(int TheArray[], int sizeOfArray, int seed, int lowRangeValue, int highRangeValue) 
{ 

int i, rand_num;
srand(seed);
for (i = 0; i < sizeOfArray; i++)
{
rand_num = rand();
TheArray[i] = rand_num % (highRangeValue - lowRangeValue + 1) + lowRangeValue;
}
}

*/
/*
// Equations of motion exam practice
#include <iostream>
#include <cmath>
#include<string>
#include<cstdlib>

#include "secondfile.h"
using  namespace std;

int banner();
void input_parameter(int, double*, double*, double*);
int analysis(int,double*, double*, double*);
void output_parameter(double, double*, double*, double*);


int main()
{
	string restart = "y";
	double Var1,Var2, Var3, result;
	int choice;
	while(restart =="y")
	{
  choice = banner();
  input_parameter(choice,&Var1,&Var2,&Var3);
  result = analysis(choice,&Var1,&Var2,&Var3);
  output_parameter(result,&Var1,&Var2,&Var3);

   cout<<endl;

   cout<<"do you want to continue y/n ";
   cin>>restart;
   
   }

   system("pause");
   return 0;
}

int banner()
	{ 
	int choose;
	cout<<"Welcome to the Equation of Motion Application Programme"<<endl;
	cout<<" 1. First Equation: s = u*t + (1/2)*a*t2"<<endl;
	cout<<" 2. Second Equation: v = u + a*t"<<endl;
	cout<<" 3. Third Equation: v2 = u2 + 2*a*s"<<endl;
	cout<<"Choose the Equation to Solve => "<<endl;
	cin>>choose;

	return choose;
	}

// pointers are normally used for functions in passing parameter.
void input_parameter(int choose, double* Var1_ptr, double* Var2_ptr, double* Var3_ptr)
{


	if(choose == 1){
		cout<<endl<< "enter the value of u ";
		cin>>*Var1_ptr;
		cout<<endl<< "enter the value of a ";
		cin>>*Var2_ptr;
		cout<<endl<< "enter the value of t ";
		cin>>*Var3_ptr;
	}
	else if(choose ==2 ){
	cout<<endl<< "enter the value of u ";
		cin>>*Var1_ptr;
		cout<<endl<< "enter the value of a ";
		cin>>*Var2_ptr;
		cout<<endl<< "enter the value of t ";
		cin>>*Var3_ptr;
	}
	else if(choose ==3){
	cout<<endl<< "enter the value of u ";
		cin>>*Var1_ptr;
		cout<<endl<< "enter the value of a ";
		cin>>*Var2_ptr;
		cout<<endl<< "enter the value of s ";
		cin>>*Var3_ptr;
	}
}
int analysis(int choose,double* Var1_ptr, double* Var2_ptr, double* Var3_ptr)
{
	switch(choose){
		{
    case 1 :
	return (*Var1_ptr)*(*Var3_ptr)+ (1/2)*(*Var2_ptr)*pow(*Var3_ptr,2);
	break;
		}
				{
    case 2 :
	return (*Var1_ptr)+(*Var2_ptr)*(*Var3_ptr) ;
	break;
		}
						{
    case 3 :
	return sqrt(pow(*Var1_ptr,2) + 2*(*Var2_ptr)*(*Var3_ptr));
	break;
		}
        {
    default :
	return -1;
	break;
		}

	
	
	
	}
}

void output_parameter(double result,double* Var1_ptr, double* Var2_ptr, double* Var3_ptr){
	if(result != -1)
	{
		cout << endl;
		cout << "Your Values Are: " << endl;
		cout << *Var1_ptr << endl;
		cout << *Var2_ptr << endl;
		cout << *Var3_ptr << endl;
		cout << endl << "Your Answer is: " << endl;
		cout << result << endl << endl;
	}
	else
	{
		cout << "The Choice of Equation is Not A Valid One." << endl << endl;
	}

};
*/


/*
Write a program that uses the random number generator functions in the standard library
 to generate a random sequence of letters from A to Z. The Get_A_Letter function should 
 return a letter based on the ASCII table; that is, A = 65 and Z = 91. Ask the user to enter a 
 seed value and call srand() with the seed value. Then write out a fifteen-character encoded
 message based on the seed. Note: You will need to place the call to Get_A_Letter inside a for 
 loop and write the message one letter at a time. Continue to loop until the user wishes to 
 stop


 #include<cstdlib>

 char Get_A_Letter()
{
    int random_num = rand() % 26 + 65; // Generate a random number between 65 (A) and 90 (Z) inclusive
    return static_cast<char>(random_num); // Convert the random number to its corresponding ASCII character
}


int thefunction(){

	int seed_value;
    char choice;
    
    do {
        cout << "Enter a seed value: ";
        cin >> seed_value;
        srand(seed_value); // Seed the random number generator with the user's input
        
        cout << "Here's your encoded message: ";
        for (int i = 0; i < 15; i++) {
            char letter = Get_A_Letter(); // Generate a random letter
            cout << letter; // Output the letter
        }
        
        cout << "\nDo you want to generate another encoded message? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
 

 return 0;
  
}










*/
/*
	float r; // All the variables must be assigned and accessed using pointers! ?
	float h;
	float* ptr_r = &r;
    float* ptr_h = &h;
	#define PI 3.14159265359 // usesd to define a constant PI
	cout<<"EEG 206: PROGRAMMING LANGUAGES 1 GRP2"<<endl;
	cout<<"volume of a cylinder calculator"<<endl;
	cout<<" enter the radius and height of a cylinder "<<endl;
	cout<<"enter height";
		cin>>h;
	cout<<"enter radius";
		cin>>*ptr_r;
		float Vol_cylinder = PI*pow(*ptr_r,2)*h;
		 cout<<" the volume of the cylinder is : " <<setprecision(3)<<Vol_cylinder;
*/


/*
    char c = 'A'; // ASCII code for 'A' is 65
    int asciiValue = c;
    cout << "ASCII value of " << c << " is " << asciiValue << endl;

// Print the ASCII table
	for (int i = 0; i < 128; i++) {
        cout << "ASCII value: " << i << " Character: " << char(i) << endl;
    }


*/




/*
int a;
int b;

void FindBigOne(){
	if(a > b){
	
	cout<<a;
	} else if(b > a){

		cout<<b;
	} else if(a = b){
		cout<<a;
	}


}
void GetTwoNumbers(){
	
cout<< "enter two integers";
cout<<endl;
cin>>a;
cin>>b;

}


	cout<<"EEG 206: PROGRAMMING LANGUAGES 1 GRP1"<<endl;
	GetTwoNumbers();
	FindBigOne();
	
	cout<<endl;

*/