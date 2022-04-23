//Program to swap values of two variables

#include<iostream>
using namespace std;

class Swap{
	float a, b;
	float temp;
	public:
	void getdata(){
		cout<<"Enter a = ";
		cin>>a;
		cout<<"Enter b = ";
		cin>>b;
	}
	void swaping(){
		temp = a;
		a = b;
		b = temp;
	}
	void display(){
		cout<<"Below are the swapped values of a and b"<<endl;
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
	}
};

int main(){
	Swap s1;
	s1.getdata();
	s1.swaping();
	s1.display();
	return 0;
}
