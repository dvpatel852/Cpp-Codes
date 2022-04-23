//Program to display Name and age of student

#include<iostream>
using namespace std;

class Student
{
	char name[11];
	int age;
	public:
	void getdata(){
		cout<<"Enter the name of student: "<<endl;
		cin>>name;

		cout<<"Enter the age of student: "<<endl;
		cin>>age;
	}
	void display(){	
		cout<<"NAME"<<"     "<<"AGE"<<endl;
		cout<<"----"<<"-----"<<"---"<<endl;
		cout<<name<<"     "<<age<<endl;
	}
};
int main(){
	Student s1;
	s1.getdata();
	s1.display();
	return 0;
}
