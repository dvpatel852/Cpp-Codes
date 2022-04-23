//Program to display Name and age of student

#include<iostream>
using namespace std;

class Operation
{	
	float a,b;
	float sum,mul,sub,div; 
	public:
	void getdata(){
		cout<<"Enter the first number: ";
		cin>>a;

		cout<<"Enter the second number: ";
		cin>>b;
	}
	void display(){	
		sum = a+b;
		sub = a-b;
		mul = a*b;
		div = a/b;
		
		cout<<"Sum = "<<sum<<endl;
		cout<<"Subtraction = "<<sub<<endl;
		cout<<"Multiplication = "<<mul<<endl;
		cout<<"Division = "<<div<<endl;
	}	
};
int main(){
	Operation o1;
	o1.getdata();
	o1.display();
	return 0;
}
