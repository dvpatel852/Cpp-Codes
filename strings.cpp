#include<iostream>
using namespace std;
class StrFun{
	int i = 0;
	int l = 0;
	char s;
	char str1[21];
	char copy[11];
	char str2[11];
	char str3[11];
	int flag = 0;
	public:
	void len(){
		cout<<"Enter the string: ";
		cin.getline(str1,21);
	
		cout<<"\n<Finding Length>"<<endl;	
		while(str1[i]!='\0'){
			l++;
			i++;
		}
		cout<<"Length of the string is "<<l<<endl;
	}	
	
	void cop(){
		cout<<"\n<Copying>"<<endl;			
		for(i=0; i<=l; i++){
			copy[i]=str1[i];
		}
		cout<<"Copied string: "<<copy<<endl;
	}		
	
	void com(){
		cout<<"\nEnter the 2nd string for comparing: ";
		cin.getline(str2,11);
		cout<<"\n<Comparing>"<<endl;
		for(i=0; i<=l; i++){
			if(str1[i]==str2[i]){
				flag++;
				continue;
			}
			else{
				flag=0;
				break;
			}
		}
		if(flag==0){
			cout<<"Both strings are different"<<endl;
		}
		else{
			cout<<"Both strings are same"<<endl;
		}
	}
	void cnt(){
		cout<<"\nEnter the another string to be concatenated: ";
		cin.getline(str3,11);
		i=0;
		while(str3[i]!='\0'){
			str1[l]=str3[i];
			i++;
			l++;
		}
		cout<<"\n<Concatenating>"<<endl;
		cout<<"Concatenated string is :"<<str1<<endl;
	}
	void ser(){
		cout<<"\nEnter the character that you want to search from main string: ";
		cin>>s;
		flag=0;
		for(i=0; i<=l; i++){
			if(copy[i]==s)
				flag++;
		}
		cout<<"\n<Searching>"<<endl;
		cout<<s<<" occurs "<<flag<<" times in the string."<<endl;
	}	
};
int main(){
	StrFun s1;
	s1.len();
	s1.cop();
	s1.com();
	s1.cnt();
	s1.ser();
	return 0;
}
