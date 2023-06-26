#include <iostream>
#include <cmath>
#include<string>
#include "secondfile.h"
using  namespace std;

float factorial(int x)
{
	// this function calculates the factorial of a particlar number
	if(x !=1){
  return x*factorial(x-1);
	} else {
		return 1;
	}
}
