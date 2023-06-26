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