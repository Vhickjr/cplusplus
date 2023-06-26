#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int r1;
int r2;
void SA_Sphere(){
	
		 cout<< 4*3.142*r1*r1;

}
void Vol_Sphere(){
	cout<< 1.33333*3.142*r1*r1*r1;

}
void SA_Sphere1(){
	
		 cout<< 4*3.142*r2*r2;

}
void Vol_Sphere1(){
	cout<< 1.33333*3.142*r2*r2*r2;

}
int main(){
	  char restart = 'y';
	string Ball_1;
	string Ball_2; 
	int i =1;

	while(restart == 'y'){
	
			
		
	cout<<"enter the name of the first ball:  "<<endl;
	cin>> Ball_1;
    cout <<endl;
	cout<<"enter the name of the second ball:    "<<endl;
    cin>> Ball_2;
	cout <<endl;
	cout<<"enter the radius of the first ball   "<<endl;
	cin>> r1;
	cout <<endl;
	cout<<"enter the radius of the second ball   "<<endl;
	cin>> r2;
	cout <<endl;
	cout<<"the surface area of " <<Ball_1 <<" is: "<<endl;
	SA_Sphere();
	cout <<endl;
	cout<<"the volume of the " <<Ball_1 <<" is: "<<endl;
	Vol_Sphere();
	cout <<endl;
	cout<<"the surface area of the " <<Ball_2 <<" is: "<<endl;
	SA_Sphere1();
	cout <<endl;
	cout<<"the volume of the " <<Ball_2 <<" is: "<<endl;
	Vol_Sphere1();
	cout <<endl;
	  cout << "Do you want to restart the loop? (y/n): ";
        cin >> restart;

              
			 
	}
	

	system("pause");
return 0;
}
