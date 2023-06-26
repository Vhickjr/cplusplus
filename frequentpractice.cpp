#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

void reverseit(char[]);

int frequentpractice() {
    char goat[50];
    cout << "Enter your character string: ";
    cin >> goat;
    reverseit(goat);
    system("pause");
	return 0;
}

void reverseit(char goat[]) {
    int i, b, c;
    b = strlen(goat);
    c = b;
    cout << "IN REVERSE ORDER: ";
    for (i = 0; i < c; i++) {
        cout << goat[b - 1];
        b--;
    }
    cout << endl;
}




/*#include <iostream>

using namespace std;

void Get_Coefficients(float*, float*, float*);
char Calc_Discriminant(float*, float*, float*);
void  Calc_Root(char,float*, float*, float*, float*, float*);

int frequentpractice()
{    char state;
	float a,b,c;
	float root1, root2;
	char restart = 'y';
	while(restart == 'y'){
	cout<<" this program calculates the roots of a quadratic equation ax2 +bx + c = 0 "<<endl;
	
	Get_Coefficients(&a, &b, &c);
	state = Calc_Discriminant(&a, &b, &c);
	cout<<endl;
	Calc_Root(&state,&a, &b, &c, &root1, &root2);
	
	cout<<"Do you want to continue y/n ";
	cin>>restart;

	}
	

system("pause");
return 0;
}*/



void Get_Coefficients(float *a_ptr, float*b_ptr, float*c_ptr){

	
cout<<" enter the coefficients of the quadratic equation to solve "<<endl;

cin>>*a_ptr;

cin>>*b_ptr;

cin>>*c_ptr;


}
char Calc_Discriminant(float*a_ptr, float*b_ptr, float*c_ptr){
	
	float Discriminant;
    Discriminant = sqrt((*b_ptr)*(*b_ptr) -4*(*a_ptr)*(*c_ptr));
	

	if( Discriminant > 0)
	{
	return 'r';
	}else if(Discriminant == 0){

		return 's';
	
	} else {

		return 'i';
	
	}


}
void  Calc_Root(char* state,float*a_ptr, float*b_ptr, float*c_ptr, float *root1_ptr, float *root2_ptr)
{ 
	

	
	if( *state == 'r')
	{
	
    *root1_ptr = (-(*b_ptr) + sqrt((*b_ptr)*(*b_ptr) - 4*(*a_ptr)*(*c_ptr))) / (2*(*a_ptr));

    *root2_ptr = (-(*b_ptr) - sqrt((*b_ptr)*(*b_ptr) - 4*(*a_ptr)*(*c_ptr))) / (2*(*a_ptr));


	cout<<"the first root is : "<<*root1_ptr<<endl;
	
	cout<<"the second root is : "<<*root2_ptr<<endl;
	}else if(*state =='s'){
	*root1_ptr = (-(*b_ptr) + sqrt((*b_ptr)*(*b_ptr) - 4*(*a_ptr)*(*c_ptr))) / (2*(*a_ptr));
    *root2_ptr = (-(*b_ptr) - sqrt((*b_ptr)*(*b_ptr) - 4*(*a_ptr)*(*c_ptr))) / (2*(*a_ptr));


	cout<<"the first root is : "<<*root1_ptr<<endl;
	
	cout<<"the second root is : "<<*root2_ptr<<endl;
	
	
	} else {
	*root1_ptr = (-(*b_ptr) + sqrt((*b_ptr)*(*b_ptr) - 4*(*a_ptr)*(*c_ptr))) / (2*(*a_ptr));

    *root2_ptr = (-(*b_ptr) - sqrt((*b_ptr)*(*b_ptr) - 4*(*a_ptr)*(*c_ptr))) / (2*(*a_ptr));


	cout<<"the first root is : "<<(-(*b_ptr)/(2*(*a_ptr)))<< "+"<<"j"<<sqrt(-(*b_ptr)*(*b_ptr) +4*(*a_ptr)*(*c_ptr))/(2*(*a_ptr))<<endl;
	cout<<"the second root is : "<<(-(*b_ptr)/(2*(*a_ptr)))<< "-"<<"j"<<sqrt(-(*b_ptr)*(*b_ptr) +4*(*a_ptr)*(*c_ptr))/(2*(*a_ptr))<<endl;
	}
}


/*
FILLING THE ARRAY WITH RANDDOM NUMBERS

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;

void Fill_It(int, int,int, int[]);

int frequentpractice()
{
    int array1[20];
    int array2[20];
    int seed1, seed2;
    cout<<"enter the first seed values ";
    cin>>seed1;
    cout<<"enter the second seed values ";
    cin>>seed2;
    
    Fill_It(0,1000,seed1,array1);
    Fill_It(1000,2000,seed2,array2);
    
        cout<<"The first array is ";
    for(int i=0;i<20;i++)
    {
        cout<<array1[i]<<setw(4);
    }
    
    cout<<endl;
	
        cout<<"The second array is ";
    for(int i=0;i<20;i++)
    {
        cout<<array2[i]<<setw(6);
    }
    return 0;
}

void Fill_It(int lowvalues, int highvalues, int seed, int thearray[])
{
    int rand_num;
    
    
    srand(seed);
    for(int i = 0; i<20;i++)
    {
        rand_num = rand() % (highvalues -lowvalues +1) + lowvalues;
        thearray[i]= rand_num;
    
    }
}


*/

/*
EQUATIONS OF MOTION UPDATED
#include <iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<iomanip>
#include<vector>
#include <cstdlib>
using namespace std;

int banner(int*);
void input_parameter(int *, float*, float*, float*);
float analysis(int *, float*, float*, float*, float*);
void output(float*, float*, float*, float*);

int frequentpractice()
	
{ 
	int choice;
	float var1, var2, var3, result;
	cout<<"welcome to quadratic equation calculator! "<<endl;
	cout<<"given the equations of motion as s = u*t + (1/2)*a*t2, v = u + a*t and v2 = u2 + 2*a*s "<<endl;
	banner(&choice);
	input_parameter(&choice,&var1,&var2,&var3);
	analysis(&choice,&var1,&var2,&var3,&result);
	output(&var1,&var2,&var3,&result);
	return 0;
}

int banner(int *choice){

	cout<<"Welcome to the Equation of Motion Application Programme"<<endl;
	cout<<"1. First Equation: s = u*t + (1/2)*a*t2"<<endl;
	cout<<"2. Second Equation: v = u + a*t"<<endl;
	cout<<"3. Third Equation: v2 = u2 + 2*a*s"<<endl;
	cout<<"Choice the Equation to Solve => ";
	cin>>*choice;

	return *choice;
}

void input_parameter(int *choice, float *var1, float *var2, float *var3){

cout<<" input the three variables of the equation";


if(*choice == 1) {
cout<<"enter the value of u: "<<endl;
cin>>*var1;
cout<<"enter the value of t: "<<endl;
cin>>*var2;
cout<<"enter the value of a: "<<endl;
cin>>*var3;

}else if(*choice == 2) {
cout<<"enter the value of u: "<<endl;
cin>>*var1;
cout<<"enter the value of a: "<<endl;
cin>>*var2;
cout<<"enter the value of t: "<<endl;
cin>>*var3;

}else if(*choice ==3 ){
cout<<"enter the value of u: "<<endl;
cin>>*var1;
cout<<"enter the value of a: "<<endl;
cin>>*var2;
cout<<"enter the value of s: "<<endl;
cin>>*var3;
}
}


float analysis(int *choice, float *var1, float *var2, float *var3, float *result){

	switch(*choice){
		{
		
	case 1:

		*result = (*var1)*(*var2) + (1/2)*(*var3)*pow(*var2,2);
		return *result;
		break;
		
		}
		{
		
	case 2:
		
		*result = (*var1) + (*var2)*(*var3);
		return *result;
		break;
		
		}
		{
		
	case 3:
		
		*result = sqrt(pow(*var1,2) + 2*(*var2)*(*var3));
		return *result;
		break;
		}
	
	
   default:
	return -1;
	break;
	
	
	}

}

void output(float *var1, float *var2, float *var3, float *result){
	
		if(*result != -1){

cout<<"enter the first variable: "<<*var1<<endl;
cout<<"enter the first variable: "<<*var2<<endl;
cout<<"enter the first variable: "<<*var3<<endl;
cout<<" the result is : "<<*result<<endl;
		}

		else {cout<<"The Choice of Equation is not a Valid One.";}
	}




*/
/*
ASCII RANDOM NUMBER GENERATOR UPDATED
#include <iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<iomanip>
#include<vector>
#include <cstdlib>
using namespace std;


int frequentpractice()
	
{ int seed1,rand_num;
   cout<<"enter a seed value my love ";
   cin>>seed1;
   srand(seed1);   
   cout<<"The Encoded message is : ";
   for(int i = 0; i<15;i++){
   rand_num = rand()% 26 + 65;
    cout<<char(rand_num);
   }
  
    return 0;
}





*/
/*
FIND THE LARGEST NUMBER IN AN ARRAY
#include <iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<iomanip>
#include<vector>
using namespace std;


#define PI 3.1425


int frequentpractice()
	
{  
	int i, n;
	int arr[100];

	cout<<"enter the total number of elements(1-100): ";
	cin>>n;

	for(i = 0; i<n; i++)
	{
	cout << "Enter Number " << i + 1 << " : ";
	cin>>arr[0];
	if(arr[0] < arr[i])
      arr[0] = arr[i];
	
	
	}
	

  cout << endl << "Largest element = " << arr[0];
			

    return 0;
}


*/
/*
CALCULATE SD

float CalculateSD(float data[]);

int frequentpractice()
	
{  
	int i;
	float data[10];

	cout<<"enter 10 numbers to calculate the standard deviation";

	for(i = 0; i<10; i++){
	cin>>data[i];
	}

	cout<<"The standard deviation is: "<<CalculateSD(data);
	 

    return 0;
}
float CalculateSD(float data[]) {

	float sum = 0.0, mean, SD = 0.0;
    int i;

for(i = 0; i<10; i++){
	sum +=data[i];
	} 

mean = sum/10;

for(i = 0; i<10; i++){
	SD +=pow(data[i]-mean, 2);
	} 

return sqrt(SD/10);

}

*/




/*
BIGGER NUMBER
#include <iostream>
using namespace std;

int GetTwoNumbers(int* num1_ptr, int* num2_ptr) {
    cout << "Enter two numbers to find the bigger one: ";
    cin >> *num1_ptr >> *num2_ptr;
    return *num1_ptr, *num2_ptr;
}

int FindBigOne(int* num1_ptr, int* num2_ptr) {
    if (*num1_ptr >= *num2_ptr) {
        return *num1_ptr;
    } else {
        return *num2_ptr;
    }
}

int main() {
    int num1, num2;
    char restart = 'y';
    
    while (restart == 'y') {
        cout << "This program finds the bigger number." << endl;
        GetTwoNumbers(&num1, &num2);
        int result = FindBigOne(&num1, &num2);
        cout << result << " is the bigger number." << endl;
        
        cout << "Do you want to continue? (y/n): ";
        cin >> restart;
    }
    
    system("pause");
    return 0;
}
*/
/*
QUDRATIC EQUATION

#include <iostream>

using namespace std;

void Get_Coefficients(float*, float*, float*);
void Calc_Discriminant(float*, float*, float*);
void  Calc_Root(float*, float*, float*, float*, float*);

int main()
{ 
	float a,b,c;
	float root1, root2;
	char restart = 'y';
	while(restart == 'y'){
	cout<<" this program calculates the roots of a quadratic equation ax2 +bx + c = 0 "<<endl;
	
	Get_Coefficients(&a, &b, &c);
	Calc_Discriminant(&a, &b, &c);
	cout<<endl;
	Calc_Root(&a, &b, &c, &root1, &root2);

	
	cout<<"Do you want to continue y/n ";
	cin>>restart;

	}
	

system("pause");
return 0;
}



void Get_Coefficients(float *a_ptr, float*b_ptr, float*c_ptr){

	
cout<<" enter the coefficients of the quadratic equation to solve "<<endl;

cin>>*a_ptr;

cin>>*b_ptr;

cin>>*c_ptr;


}
void Calc_Discriminant(float*a_ptr, float*b_ptr, float*c_ptr){
	
	float Discriminant;
    Discriminant = sqrt((*b_ptr)*(*b_ptr) -4*(*a_ptr)*(*c_ptr));
	

	if( Discriminant >= 0)
	{
	
	cout<<" r (the root is real)";
	}else if(Discriminant == 0){

		cout<<" s (the root is same ) ";
	
	
	
	
	} else {
	
	cout<<"i (the root is imaginary)";
	
	}


}
void  Calc_Root(float*a_ptr, float*b_ptr, float*c_ptr, float *root1_ptr, float *root2_ptr)
{
	*root1_ptr = (-(*b_ptr) + sqrt((*b_ptr)*(*b_ptr) - 4*(*a_ptr)*(*c_ptr))) / (2*(*a_ptr));

*root2_ptr = (-(*b_ptr) - sqrt((*b_ptr)*(*b_ptr) - 4*(*a_ptr)*(*c_ptr))) / (2*(*a_ptr));


	cout<<"the first root is : "<<*root1_ptr<<endl;
	
	cout<<"the second root is : "<<*root2_ptr<<endl;


}



*/
/*
volume of a sphere
double h;
    double r;
	double *h_ptr = &h;
    double *r_ptr=&r;
	cout<<"enter the radius and height of a cylinder and calculates the volume"<<endl;
	cin>>*h_ptr;
	cin>>*r_ptr;

	double volume = PI*pow((*r_ptr),2)*(*h_ptr);
	cout<<setprecision(3)<<"the volume is : "<<volume<<endl;
    return 0;



*/

/*FINDING THE FACTORIAL OF A NUMBER
int n;
    int factorial =1;
	cout<<"enter a number to find the factorial";
	cin>>n;

	if(n<0)
	{
		cout<<"Error, can't find the factorial of a negative number";
	} else{
	for(int i = 1; i<=n;i++)
	{
		factorial *=i;
	}
	cout<<"the factorial is :" <<factorial;
	}
*/
/*
USING if else TO FIND LEAP YEAR
int year;
  cout<<"Enter the year: ";
	  cin>>year;
	if(year%400 ==0)
	{
	 cout<<"yay, it is a leap year";
	} else if(year%100 == 0)
	{ 
	  cout<<"awww, it not a leap year";
	}else if(year%4 ==0)
	{ 
	  cout<<"yay!, it a leap year";

	}else {

		cout<<"awww, it not a leap year";
	}
*/
/*
// using ternary operator
	int speed;
	cin>>speed;
	if(speed > 5)
	{
		cout<<"speed = 10";
	} else {
		cout<<"speed = 5";
	}
	// using ternary operator
	speed > 5?cout<<"speed = 10":cout<<"speed = 5";

*/
/*
condition ? expression1 : expression2;
Here, condition is evaluated and

if condition is true, expression1 is executed.
And, if condition is false, expression2 is executed.
The ternary operator takes 3 operands (condition, expression1 and expression2). Hence, the name ternary operator.
*/


/*
{
	int a = 2;
	int *a_ptr = &a;
    cout<<a<<endl;
	cout<<&a<<endl;
	cout<<a_ptr<<endl;
	cout<<*a_ptr<<endl;
	
	
	int a_ptr = 4;

	cout<<a_ptr<<endl;
	cout<<*a_ptr<<endl;
	cout<<a<<endl;
	cout<<&a<<endl;

	*a_ptr = 40;

	
	cout<<a_ptr<<endl;
	cout<<*a_ptr<<endl;
	cout<<a<<endl;
	cout<<&a<<endl;

*/

/*
#include <iostream>
using namespace std;

void Func1();
int Func2(float);

int frequentpractice()
{
    Func1();
    float f = 1.5;
    int n = Func2(f);
    return 0;
}

void Func1()
{
    // Function definition
}

int Func2(float f)
{
    // Function definition
    return 0;
}

*/