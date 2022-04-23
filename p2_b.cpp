//Program to display Name and age of student

#include<iostream>
using namespace std;

class Operation
{	
	float a,b;
	float p,q,r,s; 
	public:
	void getdata(){
		cout<<"Enter the first number: ";
		cin>>a;

		cout<<"Enter the second number: ";
		cin>>b;
	}
	void sum(){	
		p = a+b;
		cout<<"Sum = "<<p<<endl;
	}
	void sub(){
		q = a-b;
		cout<<"Subtraction = "<<q<<endl;
	}
	void mul(){
		r = a*b;
		cout<<"Multiplication = "<<r<<endl;
	}
	void div(){
		s = a/b;
		cout<<"Division = "<<s<<endl;
	}	
};
int main(){
	Operation o1;
	o1.getdata();
	o1.sum();
	o1.sub();
	o1.mul();
	o1.div();
	return 0;
}
