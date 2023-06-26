#include <iostream>
#include <cmath>
#include<string>
#include "secondfile.h"
using  namespace std;


void SayHello(int n)
{
cout << "\n Hi there! n =" << n;
}

int codingclasses(){
	
	int i, j, k;
for(i = 0; i < 10; ++i)
{
if(i%2 == 0)
SayHello(i);
}

	return 0;

}





// sum = sum + phone_bill[i]  is same thing as sum+=phone_bill[i]
// you can use the switch statemnt to build an atm simulation.
// your case continues until it sees a break
// use single quote for char datatype
// 24e-10 that is 24 x 10 raised to power -10.


/*
int average(){
	// this function prints the average of three scores
int score1,score2,score3;
cout<<"please enter your score"<<endl;
cin>>score1>>score2>>score3;
cout<<endl;
float mean = (score1 + score2 +score3)/3;
cout<<"average score is: "<<mean;

}
*/

/*
int factorialloop(){
	
//WHILE LOOP THAT HAS FACTORIAL AND ASK USE FOR PERMISSION TO CONTINUE
	//it tells us when to stop (satellite)
	string ans = "y";
	while(ans =="y"|| ans == "Y")
	{
  cout << "Hello World" <<endl;
  cout<<factorial(4)<<endl;
  cout<<"do you wan to continue \n";
  cin>> ans;
  
	}

	*/



// write a grading system for unilag
// do it it with switch statement as well
//to avoid infinte loop with while loop, always include initializations statement and a loop altering statement
//