#include <iostream>
#include <cmath>
#include<string>
#include<cstdlib>
#include<time.h>
#include "secondfile.h"
using  namespace std;


int checkthis(int);

int main()
{  
	char restart = 'y';
	while(restart == 'y'|| restart == 'Y')
	{    
		frequentpractice();
		cout<<endl;
		 
	cout<<"Do you want to continue y/n ?";cin>>restart;
	}
   system("pause");
   return 0;
}






					












	/*
	
WHILE LOOP THAT HAS FACTORIAL AND ASK USE FOR PERMISSION TO CONTINUE
	
	string ans = "y";
	while(ans =="y"|| ans == "Y")
	{
  cout << "Hello World" <<endl;
  cout<<factorial(4)<<endl;
  cout<<"do you wan to continue \n";
  cin>> ans;
  */
  

