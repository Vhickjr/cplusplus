/*
24
	int a= 5;
	int *a_ptr = &a;
	float b =6;
	float *b_ptr = &b;
	short int c =7;
	short int *c_ptr = &c;
	long int d =8;
	long int *d_ptr = &d;
	char e = 'A';
	char *e_ptr = &e;
	bool f= true;
	bool *f_ptr=&f;
	double g = 2.5;
	double *g_ptr=&g;
	string h= "cake";
	string *h_ptr=&h;
	cout<<"addresses of each variables used"<<endl;
	cout<<&a<<setw(5)<<*a_ptr<<setw(5)<<sizeof(a)<<endl;
	cout<<&b<<setw(5)<<*b_ptr<<setw(5)<<sizeof(b)<<endl;
	cout<<&c<<setw(5)<<*c_ptr<<setw(5)<<sizeof(c)<<endl;
	cout<<&d<<setw(5)<<*d_ptr<<setw(5)<<sizeof(d)<<endl;
	cout<<&e<<setw(5)<<*e_ptr<<setw(5)<<sizeof(e)<<endl;
	cout<<&f<<setw(5)<<*f_ptr<<setw(5)<<sizeof(f)<<endl;
	cout<<&g<<setw(5)<<*g_ptr<<setw(5)<<sizeof(g)<<endl;
	cout<<&h<<setw(5)<<*h_ptr<<setw(5)<<sizeof(h)<<endl;
	*/

/*
25
	int a,b,c,d;
	int *a_ptr =&a;
	int *b_ptr = &b;
	int *c_ptr = &c;
	int *d_ptr = &d;

	*a_ptr = 1;
	*b_ptr= 2;
	*c_ptr = 3;
	*d_ptr= 4;

	cout<<"variable name |"<<setw(12)<<"type |"<<setw(12)<<"value        |"<<setw(12)<<"address      |"<<endl;
	cout<<"a             |"<<setw(12)<<"int |"<<setw(12)<<a<<" |"<<setw(12)<<&a<<" |"<<endl;
	cout<<"b             |"<<setw(12)<<"int |"<<setw(12)<<b<<" |"<<setw(12)<<&b<<" |"<<endl;
	cout<<"c             |"<<setw(12)<<"int |"<<setw(12)<<c<<" |"<<setw(12)<<&c<<" |"<<endl;
	cout<<"d             |"<<setw(12)<<"int |"<<setw(12)<<d<<" |"<<setw(12)<<&d<<" |"<<endl;
	cout<<"*a_ptr        |"<<setw(12)<<"int |"<<setw(12)<<*a_ptr<<" |"<<setw(12)<<a_ptr<<" |"<<endl;
	cout<<"*b_ptr        |"<<setw(12)<<"int |"<<setw(12)<<*b_ptr<<" |"<<setw(12)<<b_ptr<<" |"<<endl;
	cout<<"*c_ptr        |"<<setw(12)<<"int |"<<setw(12)<<*c_ptr<<" |"<<setw(12)<<c_ptr<<" |"<<endl;
	cout<<"*d_ptr        |"<<setw(12)<<"int |"<<setw(12)<<*d_ptr<<" |"<<setw(12)<<d_ptr<<" |"<<endl;
*/
/*

const float PI = 3.14159265359;
float h;
float r; 

void AskRandHCyl(){
	
cout<<"enter the height, and then the radius of cylinder"<<endl;
cin>>h;
cin>>r;

	 cout<<"heght is "<<setprecision(5)<<h<<endl;
	 cout<<"radius is "<<setprecision(5)<<r<<endl;

}
void CalcVolAndSA(){
	
	float SA_area = 2*PI*r*h;
	float Vol_Cylinder = PI*pow(r,2)*h;
	float *SA_area_ptr = &SA_area;
	float *Vol_Cylinder_ptr = &Vol_Cylinder;
	
	 cout<<"surface area is "<<setprecision(5)<<*SA_area_ptr<<endl;
	 cout<<"volume is "<<setprecision(5)<<*Vol_Cylinder_ptr<<endl;

}
int main(){

	 AskRandHCyl();
	 CalcVolAndSA();

	 

	return 0;
}
*/