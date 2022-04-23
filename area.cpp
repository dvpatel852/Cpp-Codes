//Program to find area of Triangle, Square, Circle

#include<iostream>
using namespace std;

class Triangle{
	float l1, l2, a1;
	
	public:
	void tget(){
		cout<<"Enter the length of perpendicular of Triangle: ";
		cin>>l1;

		cout<<"Enter the length of base of Triangle: ";
		cin>>l2;
	}
	void tarea(){
		a1 = (l1*l2)/2;
	}
	void tdis(){
		cout<<"Area of Triangle= "<<a1<<"\n"<<endl;
	}
};

class Square{
	float l3, a2;
	
	public:
	void sget(){
		cout<<"Enter the side length of Square: ";
		cin>>l3;
	}
	void sarea(){
		a2 = l3*l3;
	}
	void sdis(){
		cout<<"Area of Square= "<<a2<<"\n"<<endl;
	}
};

class Circle{
	float l4, a3;
	
	public:
	void cget(){
		cout<<"Enter the radius of Circle: ";
		cin>>l4;
	}
	void carea(){
		a3 = 3.14*(l4*l4);
	}
	void cdis(){
		cout<<"Area of Circle= "<<a3<<"\n"<<endl;
	}
};

int main(){
	Triangle t1;
	Square s1;
	Circle c1;

	t1.tget();
	t1.tarea();
	t1.tdis();

	s1.sget();
	s1.sarea();
	s1.sdis();

	c1.cget();
	c1.carea();
	c1.cdis();
	return 0;
}
